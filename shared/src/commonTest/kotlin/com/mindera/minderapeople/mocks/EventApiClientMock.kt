package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import io.ktor.http.*

class EventApiClientMock : IEventApiClient {
    override suspend fun getEventsByPolicy(
        userId: String,
        policyId: String
    ): Result<List<EventDTO>> {
        TODO("Not yet implemented")
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

    override suspend fun removeEventById(userId: String, eventId: String): Result<Nothing?> {
        if (userId == DefaultTestData.USER_ID_CORRECT && eventId == DefaultTestData.EVENT_ID_CORRECT) {
            return Result.success(null)
        }
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }

    override suspend fun getEventById(userId: String, eventId: String): Result<EventDTO> {
        TODO("Not yet implemented")
    }
}
