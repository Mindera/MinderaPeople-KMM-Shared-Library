package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import io.ktor.http.*

class EventApiClientMock: IEventApiClient {

    override suspend fun removeEventById(userId: String, eventId: String): Result<Nothing?> {
        if (userId == DefaultTestData.USER_ID_CORRECT && eventId == DefaultTestData.EVENT_ID_CORRECT)
            return Result.success(null)
        return Result.failure(Exception(HttpStatusCode.NotFound.description))
    }
}