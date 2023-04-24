package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.utils.RequestResult

interface IEventRepository {
    suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>>
    suspend fun editEvent(
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
    ): RequestResult<EventDTO>
    suspend fun removeEventById(userId: String, event: EventDTO): RequestResult<Nothing?>
    suspend fun getEventById(userId: String, eventId: String): RequestResult<EventDTO>
    suspend fun createEvent(
        userId: String,
        policy: PolicyDTO,
        startDate: String,
        endDate: String,
        partOfDay: PartOfDayDTO,
        additionalInfo: String? = null,
        includesBreakfast: Boolean? = null,
        city: String? = null,
        project: ProjectDTO? = null
    ): RequestResult<Nothing?>
    suspend fun getEventsByPolicy(userId: String, policyId: String): RequestResult<List<EventDTO>>
}
