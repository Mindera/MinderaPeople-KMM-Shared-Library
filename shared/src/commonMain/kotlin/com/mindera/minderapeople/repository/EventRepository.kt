package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.repository.interfaces.IEventRepository
class EventRepository(private val apiClient: IEventApiClient) : IEventRepository {
    override suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>> {
        return apiClient.getAllEventsForUser(userId)
    }
    override suspend fun editEvent(
        userId: String,
        eventId: String,
        policy: PolicyDTO,
        startDate: String,
        endDate: String,
        partOfDay: PartOfDayDTO,
        additionalInfo: String?,
        includesBreakfast: Boolean?,
        city: String?,
        project: ProjectDTO?
    ): Result<EventDTO> {
        val event = EventDTO(eventId, policy, startDate, endDate, partOfDay, additionalInfo, includesBreakfast, city, project)
        return apiClient.editExistingEvent(userId, event)
    }
    override suspend fun removeEventById(userId: String, event: EventDTO): Result<Nothing?> {
        return apiClient.removeEventById(userId, event.id)
    }

    override suspend fun getEventById(userId: String, eventId: String): Result<EventDTO> {
        return apiClient.getEventById(userId, eventId)
    }
    override suspend fun getEventsByPolicy(userId: String, policyId: String): Result<List<EventDTO>> {
        return apiClient.getEventsByPolicy(userId, policyId)
    }

    override suspend fun createEvent(
        userId: String,
        policy: PolicyDTO,
        startDate: String,
        endDate: String,
        partOfDay: PartOfDayDTO,
        additionalInfo: String?,
        includesBreakfast: Boolean?,
        city: String?,
        project: ProjectDTO?
    ): Result<Nothing?> {
        return apiClient.createEvent(userId, policy, startDate, endDate, partOfDay, additionalInfo, includesBreakfast, city, project)
    }
}
