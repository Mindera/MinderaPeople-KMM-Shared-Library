package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.EventDTO

interface IEventApiClient {
    suspend fun getEventsByPolicy(userId: String, policyId: String): Result<List<EventDTO>>
    suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>>
    suspend fun editExistingEvent(userId: String, event: EventDTO): Result<EventDTO>
    suspend fun removeEventById(userId: String, eventId: String): Result<Nothing?>
    suspend fun getEventById(userId: String, eventId: String): Result<EventDTO>
}
