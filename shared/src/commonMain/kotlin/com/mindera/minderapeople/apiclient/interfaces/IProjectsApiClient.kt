package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.DTO.ProjectDTO

interface IProjectsApiClient {
    suspend fun getAllProjects(): Result<List<ProjectDTO>>
}