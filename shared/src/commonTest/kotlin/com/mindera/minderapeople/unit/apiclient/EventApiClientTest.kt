package com.mindera.minderapeople.unit.apiClient

import com.mindera.minderapeople.apiclient.EventApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
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
            val result = client.getAllEventsForUser("correctUserId")

            assertTrue(result.isSuccess)
            assertNotEquals(null, result.getOrNull())
            assertEquals(DefaultTestData.EVENT_LIST, result.getOrNull())
        }
    }

    @Test
    fun getAllEventsForUser_userNotFound() {
        val mockEngine = MockEngine {
            respondError(HttpStatusCode.NotFound)
        }

        runBlocking {
            val client = EventApiClient(mockEngine)
            val result = client.getAllEventsForUser("unknownUserId")

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
            val result = client.getAllEventsForUser("correctUserId")

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
                "correctUserId",
                "correctEventId"
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
                "correctUserId",
                "unknownEventId"
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
                "correctUserId",
                "correctEventId"
            )

            assertEquals(null, result.getOrNull())
            assertTrue(result.isFailure)
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }
}