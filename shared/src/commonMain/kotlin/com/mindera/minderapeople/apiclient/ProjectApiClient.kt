package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import io.ktor.client.call.*
import io.ktor.client.engine.*
import io.ktor.client.request.*
import io.ktor.http.*

class ProjectApiClient (engine: HttpClientEngine): IProjectsApiClient {

    private val apiClient = ApiHttpClient(engine)
    private val httpClient = apiClient.httpClient
    private val baseUrl = apiClient.url

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