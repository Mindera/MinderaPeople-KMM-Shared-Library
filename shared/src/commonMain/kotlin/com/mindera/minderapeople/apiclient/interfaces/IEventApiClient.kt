package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.EventDTO

interface IEventApiClient {
    suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>>
    suspend fun editExistingEvent(userId: String, event: EventDTO): Result<EventDTO>
    suspend fun removeEventById(userId: String, eventId: String): Result<Nothing?>
    suspend fun getEventBy(userId: String, eventId: String): Result<EventDTO>
}
