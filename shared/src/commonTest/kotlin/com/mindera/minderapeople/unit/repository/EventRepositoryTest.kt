package com.mindera.minderapeople.unit.repository

import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.mocks.EventApiClientMock
import com.mindera.minderapeople.repository.EventRepository
import io.ktor.http.*
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class EventRepositoryTest {

    @Test
    fun removeEventById_successful() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result = repo.removeEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.CORRECT_EVENT)
            assertTrue(result.isSuccess)
            assertEquals(null, result.getOrNull())
        }
    }

    @Test
    fun removeEventById_userNotFound() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result = repo.removeEventById("unknownId", DefaultTestData.CORRECT_EVENT)
            assertTrue(result.isFailure)
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun removeEventById_eventNotFound() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)


        runBlocking {
            val result = repo.removeEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.ERROR_EVENT)
            assertTrue(result.isFailure)
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }
}