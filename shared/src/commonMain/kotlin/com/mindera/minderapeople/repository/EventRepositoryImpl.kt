package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.repository.interfaces.IEventRepository


class EventRepositoryImpl(val apiClient: IEventApiClient): IEventRepository {
    override suspend fun getEventById(userId: String, eventId: String): Result<EventDTO> {
        return apiClient.getEventById(userId, eventId)
    }

    override suspend fun getEventByPolicy(userId: String, policyId: String): Result<List<EventDTO>> {
        return apiClient.getEventByPolicy(userId, policyId)
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