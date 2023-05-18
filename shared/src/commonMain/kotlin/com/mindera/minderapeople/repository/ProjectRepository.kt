package com.mindera.minderapeople.repository

import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import com.mindera.minderapeople.repository.interfaces.IProjectRepository
import com.mindera.minderapeople.utils.RequestResult
import com.mindera.minderapeople.utils.toRequestResult

class ProjectRepository(private val apiClient: IProjectsApiClient) : IProjectRepository{
    override suspend fun getAllProjects(): RequestResult<List<ProjectDTO>> {
        return apiClient.getAllProjects().toRequestResult()
    }
}