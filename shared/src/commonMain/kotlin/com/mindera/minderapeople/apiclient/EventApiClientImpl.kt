package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.apiclient.interfaces.IEventApiClient
import com.mindera.minderapeople.dto.EventDTO
import io.ktor.client.call.*
import io.ktor.client.engine.*
import io.ktor.client.request.*
import io.ktor.http.*

class EventApiClientImpl(engine: HttpClientEngine): IEventApiClient {

    private val httpClient = MinderaPeopleAPIClient(engine).httpClient
    private val baseUrl = MinderaPeopleAPIClient.BASE_URL

    override suspend fun getEventBy(userId: String, eventId: String): Result<EventDTO> {
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
        return try{
            val response = httpClient.get("${baseUrl}/events/${userId}/${policyId}")

            if(response.status == HttpStatusCode.OK)
                Result.success(response.body())
            else
                Result.failure(Exception(response.status.description))
        }catch (e: Exception){
            Result.failure(e)
        }
    }
}