package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.EventDTO

interface IEventRepository {
    suspend fun getEventById(userId: String, eventId: String): Result<EventDTO>
}