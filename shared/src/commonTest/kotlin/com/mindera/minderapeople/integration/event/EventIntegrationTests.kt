package com.mindera.minderapeople.integration.event

import com.mindera.minderapeople.apiclient.EventApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.repository.EventRepository
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlinx.coroutines.test.runTest
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotEquals
import kotlin.test.assertTrue

class EventIntegrationTests {

    @Test
    fun getAllEventsForUser_successful() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.EVENT_LIST)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.getAllEventsForUser(DefaultTestData.USER_ID_CORRECT)

            assertTrue(result.isSuccess)
            assertEquals(DefaultTestData.EVENT_LIST, result.getOrNull())
        }
    }

    @Test
    fun getAllEventsForUser_userNotFound() {
        val mockEngine = MockEngine {
            respondError(HttpStatusCode.NotFound)
        }
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.getAllEventsForUser("0001")

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
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.getAllEventsForUser(DefaultTestData.USER_ID_CORRECT)
            assertTrue(result.isFailure)
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun editExistingEvent_successful() {
        val event = DefaultTestData.CORRECT_EVENT
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(event)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.editEvent(DefaultTestData.USER_ID_CORRECT,
                event.id,
                event.policy,
                event.startDate,
                event.endDate,
                event.partOfDay,
                event.additionalInfo,
                event.includesBreakfast,
                event.city,
                event.project
                )

            assertTrue(result.isSuccess)
            assertEquals(event, result.getOrNull())
        }
    }

    @Test
    fun editExistingEvent_eventNotFound() {
        val event = DefaultTestData.CORRECT_EVENT
        val mockEngine = MockEngine {
            respondError(HttpStatusCode.NotFound)
        }
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.editEvent(
                DefaultTestData.USER_ID_CORRECT,
                "0001",
                event.policy,
                event.startDate,
                event.endDate,
                event.partOfDay,
                event.additionalInfo,
                event.includesBreakfast,
                event.city,
                event.project
                )

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun editExistingEvent_exceptionThrown() {
        val event = DefaultTestData.CORRECT_EVENT
        val error = "Error occurred"
        val mockEngine = MockEngine {
            throw Exception(error)
        }
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.editEvent(
                DefaultTestData.USER_ID_CORRECT,
                event.id,
                event.policy,
                event.startDate,
                event.endDate,
                event.partOfDay,
                event.additionalInfo,
                event.includesBreakfast,
                event.city,
                event.project
            )
            assertTrue(result.isFailure)
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
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.removeEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.CORRECT_EVENT)

            assertTrue(result.isSuccess)
            assertEquals(Unit, result.getOrNull())
        }
    }

    @Test
    fun removeEventById_eventNotFound() {
        val mockEngine = MockEngine {
            respondError(HttpStatusCode.NotFound)
        }
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.removeEventById(DefaultTestData.EVENT_ID_CORRECT, DefaultTestData.CORRECT_EVENT)
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
        val apiClient = EventApiClient(mockEngine)
        val repo = EventRepository(apiClient)

        runBlocking {
            val result = repo.removeEventById(DefaultTestData.EVENT_ID_CORRECT, DefaultTestData.CORRECT_EVENT)
            assertTrue(result.isFailure)
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventById returns success and the created event if successful`() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.CORRECT_EVENT)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runTest {
            val result = eventRepo.getEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isSuccess)
            assertNotEquals(null, result.getOrNull())
            assertEquals(DefaultTestData.CORRECT_EVENT, result.getOrNull())
        }
    }

    @Test
    fun `test getEventById returns failure and NotFound status if userId or eventId is incorrect`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventById("0001", DefaultTestData.EVENT_ID_CORRECT)

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

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventById(DefaultTestData.USER_ID_CORRECT, "0001")

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

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventById("0001", "0001")

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

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_ID_CORRECT)

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
        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventsByPolicy(DefaultTestData.USER_ID_CORRECT, DefaultTestData.POLICY_ID_CORRECT)

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

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventsByPolicy("0001", DefaultTestData.POLICY_ID_CORRECT)

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

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventsByPolicy(DefaultTestData.USER_ID_CORRECT, "0001")

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

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventsByPolicy("0001", "0001")

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

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.getEventsByPolicy(DefaultTestData.USER_ID_CORRECT, DefaultTestData.POLICY_ID_CORRECT)
            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test create event returns success if api request is successful`() {
        val event = DefaultTestData.CORRECT_EVENT
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.CORRECT_EVENT)),
                status = HttpStatusCode.Created,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        val client = EventApiClient(mockEngine)
        client.uuid = DefaultTestData.EVENT_ID_CORRECT
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.createEvent(
                DefaultTestData.USER_ID_CORRECT,
                event.policy,
                event.startDate,
                event.endDate,
                event.partOfDay,
                event.additionalInfo,
                event.includesBreakfast,
                event.city,
                event.project
            )

            assertTrue(result.isSuccess)
            assertEquals(DefaultTestData.CORRECT_EVENT, result.getOrNull())
        }
    }

    @Test
    fun `test create event returns failure if user not found`() {
        val event = DefaultTestData.CORRECT_EVENT
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.createEvent(
                DefaultTestData.USER_ID_CORRECT,
                event.policy,
                event.startDate,
                event.endDate,
                event.partOfDay,
                event.additionalInfo,
                event.includesBreakfast,
                event.city,
                event.project
            )

            assertTrue(result.isFailure)
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test create event returns failure if exception is thrown`() {
        val event = DefaultTestData.CORRECT_EVENT
        val error = "error"
        val mockEngine = MockEngine {
            throw Exception(error)
        }

        val client = EventApiClient(mockEngine)
        val eventRepo = EventRepository(client)

        runBlocking {
            val result = eventRepo.createEvent(
                DefaultTestData.USER_ID_CORRECT,
                event.policy,
                event.startDate,
                event.endDate,
                event.partOfDay,
                event.additionalInfo,
                event.includesBreakfast,
                event.city,
                event.project
            )

            assertTrue(result.isFailure)
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }
}