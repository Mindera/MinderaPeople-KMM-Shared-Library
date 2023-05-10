package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.CreatingEventDTO
import com.mindera.minderapeople.dto.EventDTO
import io.ktor.http.*

class EventApiClientMock : IEventApiClient {

    override suspend fun getEventsByPolicy(
        userId: String,
        policyId: String
    ): Result<List<EventDTO>> {
        if (userId == DefaultTestData.USER_ID_CORRECT && policyId == DefaultTestData.POLICY_ID_CORRECT) {
            return Result.success(listOf(DefaultTestData.CORRECT_EVENT))
        }
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }

    override suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>> {
        if (userId == DefaultTestData.USER_ID_CORRECT) {
            return Result.success(DefaultTestData.EVENT_LIST)
        }
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }

    override suspend fun editExistingEvent(userId: String, event: EventDTO): Result<EventDTO> {
        if (userId == DefaultTestData.USER_ID_CORRECT) {
            return Result.success(DefaultTestData.CORRECT_EVENT)
        }
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }

    override suspend fun removeEventById(userId: String, eventId: String): Result<Unit> {
        if (userId == DefaultTestData.USER_ID_CORRECT && eventId == DefaultTestData.EVENT_ID_CORRECT) {
            return Result.success(Unit)
        }
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }

    override suspend fun getEventById(userId: String, eventId: String): Result<EventDTO> {
        if (userId == DefaultTestData.USER_ID_CORRECT && eventId == DefaultTestData.EVENT_ID_CORRECT) {
            return Result.success(DefaultTestData.CORRECT_EVENT)
        }
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }

    override suspend fun createEvent(userId: String, event: CreatingEventDTO): Result<Unit> {
        if (userId == DefaultTestData.USER_ID_CORRECT) {
            return Result.success(Unit)
        }
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }
}
