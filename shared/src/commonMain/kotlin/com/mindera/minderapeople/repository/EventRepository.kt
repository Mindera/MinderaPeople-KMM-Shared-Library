package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.repository.interfaces.IEventRepository

class EventRepository(private val apiClient: IEventApiClient) : IEventRepository {

    override suspend fun removeEventById(userId: String, event: EventDTO): Result<Nothing?> {
        return apiClient.removeEventById(userId, event.id)
    }
}