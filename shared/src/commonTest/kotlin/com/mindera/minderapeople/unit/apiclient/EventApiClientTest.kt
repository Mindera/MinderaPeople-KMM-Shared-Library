package com.mindera.minderapeople.unit.apiclient

import com.mindera.minderapeople.apiclient.EventApiClient
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class EventApiClientTest {

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
}