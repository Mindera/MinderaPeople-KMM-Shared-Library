package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.EventDTO

interface IEventRepository {

    suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>>
    suspend fun removeEventById(userId: String, event: EventDTO): Result<Nothing?>
}
