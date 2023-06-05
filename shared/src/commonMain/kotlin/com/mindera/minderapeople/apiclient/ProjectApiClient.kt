package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import io.ktor.client.call.body
import io.ktor.client.engine.HttpClientEngine
import io.ktor.client.request.get
import io.ktor.http.HttpStatusCode

class ProjectApiClient (engine: HttpClientEngine): IProjectsApiClient {

    private val apiClient = ApiHttpClient(engine)
    private val httpClient = apiClient.httpClient

    override suspend fun getAllProjects(): Result<List<ProjectDTO>> {
        return try{
            val response = httpClient.get("${ApiDefaultData.BASE_URL}/projects")

            if(response.status == HttpStatusCode.OK)
                Result.success(response.body())
            else
                Result.failure(Exception(response.status.description))
        }catch (e: Exception){
            Result.failure(e)
        }
    }
}