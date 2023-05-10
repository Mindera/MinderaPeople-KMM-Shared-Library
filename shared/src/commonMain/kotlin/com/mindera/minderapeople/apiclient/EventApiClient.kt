package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.CreatingEventDTO
import com.mindera.minderapeople.dto.EventDTO
import io.ktor.client.call.*
import io.ktor.client.engine.*
import io.ktor.client.request.*
import io.ktor.http.*

class EventApiClient(engine: HttpClientEngine) : IEventApiClient {

    private val apiHttpClient = ApiHttpClient(engine)
    private val httpClient = apiHttpClient.httpClient

    override suspend fun getEventsByPolicy(userId: String, policyId: String): Result<List<EventDTO>> {
        return try {
            val response = httpClient.get("${ApiDefaultData.BASE_URL}/events/${userId}?policy=${policyId}")

            if (response.status == HttpStatusCode.OK) {
                Result.success(response.body())
            } else {
                Result.failure(Exception(response.status.description))
            }
        } catch (e: Exception) {
            Result.failure(e)
        }
    }

    override suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>> {
        return try {
            val response = httpClient.get("${ApiDefaultData.BASE_URL}/events/${userId}")

            if (response.status == HttpStatusCode.OK) {
                Result.success(response.body())
            } else {
                Result.failure(Exception(response.status.description))
            }
        } catch (e: Exception) {
            Result.failure(e)
        }
    }

    override suspend fun editExistingEvent(userId: String, event: EventDTO): Result<EventDTO> {
        return try {
            val response = httpClient.patch("${ApiDefaultData.BASE_URL}/events/${userId}/${event.id}") {
                contentType(ContentType.Application.Json)
                setBody(event)
            }

            if (response.status == HttpStatusCode.OK) {
                Result.success(response.body())
            } else {
                Result.failure(Exception(response.status.description))
            }
        } catch (e: Exception) {
            Result.failure(e)
        }
    }

    override suspend fun removeEventById(userId: String, eventId: String): Result<Unit> {
        return try {
            val response = httpClient.delete("${ApiDefaultData.BASE_URL}/events/${userId}/${eventId}")

            if (response.status == HttpStatusCode.NoContent) {
                Result.success(Unit)
            } else {
                Result.failure(Exception(response.status.description))
            }
        } catch (e: Exception) {
            Result.failure(e)
        }
    }

    override suspend fun getEventById(userId: String, eventId: String): Result<EventDTO> {
        return try{
            val response = httpClient.get("${ApiDefaultData.BASE_URL}/events/${userId}/${eventId}")

            if(response.status == HttpStatusCode.OK)
                Result.success(response.body())
            else
                Result.failure(Exception(response.status.description))
        }catch (e: Exception){
            Result.failure(e)
        }
    }

    override suspend fun createEvent(
        userId: String,
        event: CreatingEventDTO
    ): Result<Unit> {
        return try{
            val response = httpClient.post("${ApiDefaultData.BASE_URL}/events/${userId}") {
                contentType(ContentType.Application.Json)
                setBody(event)
            }

            if(response.status == HttpStatusCode.Created)
                Result.success(Unit)
            else
                Result.failure(Exception(response.status.description))
        }catch (e: Exception){
            Result.failure(e)
        }
    }
}
