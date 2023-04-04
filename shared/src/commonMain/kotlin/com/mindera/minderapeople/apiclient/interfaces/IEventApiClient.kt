package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.dto.ProjectDTO

interface IEventApiClient {
    suspend fun getEventById(userId: String, eventId: String): Result<EventDTO>
    suspend fun getEventByPolicy(userId: String, policyId: String): Result<List<EventDTO>>
    suspend fun createEvent(userId: String,
                            policy: PolicyDTO,
                            startDate: String,
                            endDate: String,
                            partOfDay: PartOfDayDTO,
                            additionalInfo: String? = null,
                            includesBreakfast: Boolean? = null,
                            city: String? = null,
                            project: ProjectDTO? = null): Result<Nothing?>
}