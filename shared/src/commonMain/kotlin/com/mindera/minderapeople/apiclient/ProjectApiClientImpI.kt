package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.DTO.ProjectDTO
import com.mindera.minderapeople.MinderaPeopleAPIClient
import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import io.ktor.client.call.*
import io.ktor.client.request.*

class ProjectApiClientImpl: IProjectsApiClient {

    val httpClient = MinderaPeopleAPIClient.httpClient
    val baseUrl = MinderaPeopleAPIClient.BASE_URL

    override suspend fun getAllProjects(): Result<List<ProjectDTO>> {
        return try{
            val response: List<ProjectDTO> = httpClient.get("${baseUrl}/policies").body()
            Result.success(response)
        }catch (e: Exception){
            Result.failure(e)
        }
    }
}