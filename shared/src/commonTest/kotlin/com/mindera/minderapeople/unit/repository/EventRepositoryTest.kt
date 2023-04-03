package com.mindera.minderapeople.unit.repository

import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.mocks.EventApiClientMock
import com.mindera.minderapeople.repository.DefaultData
import com.mindera.minderapeople.repository.EventRepository
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
    fun removeEventById_invalidUserId() {

        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result = repo.removeEventById("0001", DefaultTestData.CORRECT_EVENT)
            assertTrue(result.isFailure)
            assertEquals(DefaultData.INVALID_IDS, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun removeEventById_invalidEventId() {

        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result = repo.removeEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.ERROR_EVENT)
            assertTrue(result.isFailure)
            assertEquals(DefaultData.INVALID_IDS, result.exceptionOrNull()?.message)
        }
    }
}