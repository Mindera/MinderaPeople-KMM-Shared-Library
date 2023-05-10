package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.*
import com.mindera.minderapeople.repository.interfaces.IEventRepository
import com.mindera.minderapeople.utils.RequestResult
import com.mindera.minderapeople.utils.toRequestResult

class EventRepository(private val apiClient: IEventApiClient) : IEventRepository {
    override suspend fun getAllEventsForUser(userId: String): RequestResult<List<EventDTO>> {
        return apiClient.getAllEventsForUser(userId).toRequestResult()
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
    ): RequestResult<EventDTO> {
        val event = EventDTO(eventId, policy, startDate, endDate, partOfDay, additionalInfo, includesBreakfast, city, project)
        return apiClient.editExistingEvent(userId, event).toRequestResult()
    }

    override suspend fun removeEventById(userId: String, event: EventDTO): RequestResult<Unit> {
        return apiClient.removeEventById(userId, event.id).toRequestResult()
    }

    override suspend fun getEventById(userId: String, eventId: String): RequestResult<EventDTO> {
        return apiClient.getEventById(userId, eventId).toRequestResult()
    }

    override suspend fun getEventsByPolicy(userId: String, policyId: String): RequestResult<List<EventDTO>> {
        return apiClient.getEventsByPolicy(userId, policyId).toRequestResult()
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
    ): RequestResult<Unit> {
        val event = CreatingEventDTO(policy, startDate, endDate, partOfDay, additionalInfo, includesBreakfast, city, project)
        return apiClient.createEvent(userId, event).toRequestResult()
    }
}
