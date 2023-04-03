package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import io.ktor.client.call.*
import io.ktor.client.engine.*
import io.ktor.client.request.*
import io.ktor.http.*

class ProjectApiClientImpl (engine: HttpClientEngine): IProjectsApiClient {

    private val httpClient = MinderaPeopleAPIClient(engine).httpClient
    private val baseUrl = MinderaPeopleAPIClient.BASE_URL

    override suspend fun getAllProjects(): Result<List<ProjectDTO>> {
        return try{
            val response = httpClient.get("${baseUrl}/policies")

            if(response.status == HttpStatusCode.OK)
                Result.success(response.body())
            else
                Result.failure(Exception(response.status.description))
        }catch (e: Exception){
            Result.failure(e)
        }
    }
}