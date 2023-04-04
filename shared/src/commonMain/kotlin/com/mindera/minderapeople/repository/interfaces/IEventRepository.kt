package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.dto.ProjectDTO

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
    ): Result<EventDTO>
    suspend fun removeEventById(userId: String, event: EventDTO): Result<Nothing?>
    suspend fun getEventById(userId: String, eventId: String): Result<EventDTO>
}
