package com.mindera.minderapeople.repository

import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import com.mindera.minderapeople.repository.interfaces.IProjectRepository

class ProjectRepository(private val apiClient: IProjectsApiClient) : IProjectRepository{
    override suspend fun getAllProjects(): Result<List<ProjectDTO>> {
        return apiClient.getAllProjects()
    }

}