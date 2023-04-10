package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.dto.ProjectDTO

interface IEventApiClient {
    suspend fun getEventsByPolicy(userId: String, policyId: String): Result<List<EventDTO>>
    suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>>
    suspend fun editExistingEvent(userId: String, event: EventDTO): Result<EventDTO>
    suspend fun removeEventById(userId: String, eventId: String): Result<Nothing?>
    suspend fun getEventById(userId: String, eventId: String): Result<EventDTO>
    suspend fun createEvent(userId: String, event: EventDTO): Result<Nothing?>
}
