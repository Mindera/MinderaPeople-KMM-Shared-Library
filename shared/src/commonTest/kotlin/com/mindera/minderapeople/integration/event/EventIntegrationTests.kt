package com.mindera.minderapeople.integration.event

import com.mindera.minderapeople.apiclient.EventApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.repository.EventRepository
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class EventIntegrationTests {

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
            assertEquals(null, result.getOrNull())
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
            val result = repo.removeEventById(DefaultTestData.EVENT_ID_CORRECT, DefaultTestData.ERROR_EVENT)
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

}