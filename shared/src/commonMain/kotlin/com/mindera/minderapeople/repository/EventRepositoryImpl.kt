package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.repository.interfaces.IEventRepository


class EventRepositoryImpl(val apiClient: IEventApiClient): IEventRepository {
    override suspend fun getEventById(userId: String, eventId: String): Result<EventDTO> {
        return apiClient.getEventById(userId, eventId)
    }

}