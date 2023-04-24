package com.mindera.minderapeople.unit.apiclient

import com.mindera.minderapeople.apiclient.EventApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.utils.toRequestResult
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotEquals
import kotlin.test.assertTrue

class EventApiClientTest {

    @Test
    fun getAllEventsForUser_successful() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.EVENT_LIST)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getAllEventsForUser("3b1276b3-d2f6-4e29-af8f-a0cb00208dda")

            assertTrue(result.isSuccess)
            assertNotEquals(null, result.getOrNull())
            assertEquals(DefaultTestData.EVENT_LIST, result.getOrNull())
        }
    }

    @Test
    fun getAllEventsForUser_userNotFound() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getAllEventsForUser("0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun getAllEventsForUser_exceptionThrown() {
        val error = "Error occurred"
        val mockEngine = MockEngine {
            throw Exception(error)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getAllEventsForUser("3b1276b3-d2f6-4e29-af8f-a0cb00208dda")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun editExistingEvent_successful() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.EVENT_LIST[0])),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.editExistingEvent(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_LIST[0])

            assertTrue(result.isSuccess)
            assertEquals(DefaultTestData.EVENT_LIST[0], result.getOrNull())
        }
    }

    @Test
    fun editExistingEvent_eventNotFound() {
        val mockEngine = MockEngine {
            respondError(HttpStatusCode.NotFound)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.editExistingEvent(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_LIST[2])

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun editExistingEvent_exceptionThrown() {
        val error = "Could not parse result"
        val mockEngine = MockEngine {
            throw Exception(error)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.editExistingEvent(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_LIST[2])

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun removeEventById_successful() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NoContent,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.removeEventById(
                "3b1276b3-d2f6-4e29-af8f-a0cb00208dda",
                "f4b20503-0a59-4e76-8796-aee78726139f"
            )

            assertTrue(result.isSuccess)
            assertEquals(null, result.getOrNull())
        }
    }

    @Test
    fun removeEventById_eventNotFound() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.removeEventById(
                "3b1276b3-d2f6-4e29-af8f-accb00208dda",
                "f4b20503-0a59-4e76-8796-aee78726139f"
            )

            assertEquals(null, result.getOrNull())
            assertTrue(result.isFailure)
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun removeEventById_exceptionThrown() {
        val error = "Error occurred"
        val mockEngine = MockEngine {
            throw Exception(error)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.removeEventById(
                "3b1276b3-d2f6-4e29-af8f-a0cb00208dda",
                "f4b20503-0a59-4e76-8796-aee78726139f"
            )

            assertEquals(null, result.getOrNull())
            assertTrue(result.isFailure)
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventById returns success and the created event if succesfull`() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.CORRECT_EVENT)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isSuccess)
            assertNotEquals(null, result.getOrNull())
            assertEquals(DefaultTestData.CORRECT_EVENT, result.getOrNull())
        }
    }

    @Test
    fun `test getEventById returns failure and NotFound status if userId is incorrect`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventById("0001", DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventById returns failure and NotFound status if eventId is incorrect`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventById(DefaultTestData.USER_ID_CORRECT, "0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventById returns failure and NotFound status if eventId and userId are incorrect`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventById("0001", "0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventById returns failure when Exception is thrown`(){
        val error = "Error occurred"
        val mockEngine = MockEngine {
            throw Exception(error)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventsByPolicy returns success and a list of events if successful`() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(listOf(DefaultTestData.CORRECT_EVENT))),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventsByPolicy(DefaultTestData.USER_ID_CORRECT, DefaultTestData.POLICY_ID_CORRECT)

            assertTrue(result.isSuccess)
            assertNotEquals(null, result.getOrNull())
            assertEquals(listOf(DefaultTestData.CORRECT_EVENT), result.getOrNull())
        }
    }

    @Test
    fun `test getEventsByPolicy returns failure and NotFound status if userId is incorrect`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventsByPolicy("0001", DefaultTestData.POLICY_ID_CORRECT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventsByPolicy returns failure and NotFound status if policyId is incorrect`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventsByPolicy(DefaultTestData.USER_ID_CORRECT, "0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventsByPolicy returns failure and NotFound status if policyId and userId are incorrect`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventsByPolicy("0001", "0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventsByPolicy returns failure when Exception is thrown`(){
        val error = "Error occurred"
        val mockEngine = MockEngine {
            throw Exception(error)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getEventsByPolicy(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test create event returns success if api call is successful`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.Created,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.createEvent(DefaultTestData.USER_ID_CORRECT, DefaultTestData.CORRECT_NEW_EVENT)

            assertTrue(result.isSuccess)
            assertEquals(null, result.getOrNull())
        }
    }

    @Test
    fun `test create event returns failure when user not found`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.createEvent("0120", DefaultTestData.CORRECT_NEW_EVENT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test create event returns failure when exception is thrown`(){
        val error = "Error occurred"
        val mockEngine = MockEngine {
            throw Exception(error)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.createEvent("0120", DefaultTestData.CORRECT_NEW_EVENT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }
}