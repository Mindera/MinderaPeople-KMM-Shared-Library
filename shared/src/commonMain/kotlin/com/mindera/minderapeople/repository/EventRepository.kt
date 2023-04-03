package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.repository.interfaces.IEventRepository
import com.mindera.minderapeople.utils.Identifiers

class EventRepository(private val apiClient: IEventApiClient) : IEventRepository {

    override suspend fun removeEventById(userId: String, event: EventDTO): Result<Nothing?> {
        if (Identifiers.validateUUID(userId, event.id))
            return apiClient.removeEventById(userId, event.id)
        return Result.failure(Exception(DefaultData.INVALID_IDS))
    }
}