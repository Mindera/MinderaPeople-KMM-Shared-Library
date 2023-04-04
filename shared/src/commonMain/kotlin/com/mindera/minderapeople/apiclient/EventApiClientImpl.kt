package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.dto.ProjectDTO
import io.ktor.client.call.*
import io.ktor.client.engine.*
import io.ktor.client.request.*
import io.ktor.http.*

class EventApiClientImpl(engine: HttpClientEngine): IEventApiClient {

    private val httpClient = MinderaPeopleAPIClient(engine).httpClient
    private val baseUrl = MinderaPeopleAPIClient.BASE_URL

    override suspend fun getEventById(userId: String, eventId: String): Result<EventDTO> {
        return try{
            val response = httpClient.get("${baseUrl}/events/${userId}/${eventId}")

            if(response.status == HttpStatusCode.OK)
                Result.success(response.body())
            else
                Result.failure(Exception(response.status.description))
        }catch (e: Exception){
            Result.failure(e)
        }
    }

    override suspend fun getEventByPolicy(userId: String, policyId: String): Result<List<EventDTO>> {
        return try {
            val response = httpClient.get("${baseUrl}/events/${userId}/${policyId}")

            if (response.status == HttpStatusCode.OK)
                Result.success(response.body())
            else
                Result.failure(Exception(response.status.description))
        } catch (e: Exception) {
            Result.failure(e)
        }
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
        return try{
            val body = EventDTO(
                policy = policy,
                startDate = startDate,
                endDate = endDate,
                partOfDay = partOfDay,
                includesBreakfast = includesBreakfast,
                additionalInfo = additionalInfo,
                city = city,
                project = project
            )
            val response = httpClient.post("${baseUrl}/events/${userId}") {
                contentType(ContentType.Application.Json)
                setBody(body)
            }

            if(response.status == HttpStatusCode.OK)
                Result.success(null)
            else
                Result.failure(Exception(response.status.description))
        }catch (e: Exception){
            Result.failure(e)
        }
    }
}