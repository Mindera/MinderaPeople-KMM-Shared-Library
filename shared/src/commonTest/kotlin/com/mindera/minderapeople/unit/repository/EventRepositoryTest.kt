package com.mindera.minderapeople.unit.repository

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.mocks.EventApiClientMock
import com.mindera.minderapeople.repository.EventRepository
import io.ktor.http.*
import io.mockative.*
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotEquals
import kotlin.test.assertTrue

class EventRepositoryTest {
    @Mock
    private val api = mock(classOf<IEventApiClient>())

    @Test
    fun getAllEventsForUser_successful() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result = repo.getAllEventsForUser(DefaultTestData.USER_ID_CORRECT)

            assertTrue(result.isSuccess)
            assertEquals(DefaultTestData.EVENT_LIST, result.getOrNull())
        }
    }

    @Test
    fun getAllEventsForUser_userNotFound() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result = repo.getAllEventsForUser("0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun editExistingEvent_successful() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)
        val event = DefaultTestData.CORRECT_EVENT

        runBlocking {
            val result =
                repo.editEvent(
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

            assertTrue(result.isSuccess)
            assertEquals(event, result.getOrNull())
        }
    }

    @Test
    fun editExistingEvent_eventNotFound() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)
        val event = DefaultTestData.ERROR_EVENT

        runBlocking {
            val result = repo.editEvent("00012",
                event.id,
                event.policy,
                event.startDate,
                event.endDate,
                event.partOfDay,
                event.additionalInfo,
                event.includesBreakfast,
                event.city,
                event.project)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun removeEventById_successful() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result =
                repo.removeEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.CORRECT_EVENT)
            assertTrue(result.isSuccess)
            assertEquals(null, result.getOrNull())
        }
    }

    @Test
    fun removeEventById_userNotFound() {
        val client = EventApiClientMock()
        val repo = EventRepository(client)

        runBlocking {
            val result = repo.removeEventById(
                    "3b1276b3-d2f6-4e29-af8f-a0cb00208dcc",
                    DefaultTestData.CORRECT_EVENT
                )
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

    @Test
    fun `test getEventById returns success and the created event if successful`() {
        given(api).suspendFunction(api::getEventById, fun2())
            .whenInvokedWith(oneOf(DefaultTestData.USER_ID_CORRECT), oneOf(DefaultTestData.EVENT_ID_CORRECT))
            .thenReturn(Result.success(DefaultTestData.CORRECT_EVENT))
        val eventRepo = EventRepository(api)

        runBlocking {
            val result = eventRepo.getEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isSuccess)
            assertNotEquals(null, result.getOrNull())
            assertEquals(DefaultTestData.CORRECT_EVENT, result.getOrNull())
        }
    }

    @Test
    fun `test getEventById returns failure and NotFound status if userId is incorrect`(){
        given(api).suspendFunction(api::getEventById, fun2())
            .whenInvokedWith(oneOf("0001"), oneOf(DefaultTestData.EVENT_ID_CORRECT))
            .thenReturn(Result.failure(Exception(HttpStatusCode.NotFound.description)))
        val eventRepo = EventRepository(api)

        runBlocking {
            val result = eventRepo.getEventById("0001", DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventById returns failure and NotFound status if eventId is incorrect`(){
        given(api).suspendFunction(api::getEventById, fun2())
            .whenInvokedWith(oneOf(DefaultTestData.USER_ID_CORRECT), oneOf("0001"))
            .thenReturn(Result.failure(Exception(HttpStatusCode.NotFound.description)))
        val eventRepo = EventRepository(api)

        runBlocking {
            val result = eventRepo.getEventById(DefaultTestData.USER_ID_CORRECT, "0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getEventById returns failure and NotFound status if eventId and userId are incorrect`(){
        given(api).suspendFunction(api::getEventById, fun2())
            .whenInvokedWith(oneOf("0001"), oneOf("0001"))
            .thenReturn(Result.failure(Exception(HttpStatusCode.NotFound.description)))
        val eventRepo = EventRepository(api)

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
        given(api).suspendFunction(api::getEventById, fun2())
            .whenInvokedWith(oneOf(DefaultTestData.USER_ID_CORRECT), oneOf(DefaultTestData.EVENT_ID_CORRECT))
            .thenReturn(Result.failure(Exception(error)))
        val eventRepo = EventRepository(api)

        runBlocking {
            val result = eventRepo.getEventById(DefaultTestData.USER_ID_CORRECT, DefaultTestData.EVENT_ID_CORRECT)

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(error, result.exceptionOrNull()?.message)
        }
    }
}
