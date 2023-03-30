package com.mindera.minderapeople.repository

import com.mindera.minderapeople.DTO.ProjectDTO
import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import com.mindera.minderapeople.repository.interfaces.IProjectRepository

class ProjectRepositoryImpl(val apiClient: IProjectsApiClient) : IProjectRepository{
    override suspend fun getAllProjects(): Result<List<ProjectDTO>> {
        return apiClient.getAllProjects()
    }

}