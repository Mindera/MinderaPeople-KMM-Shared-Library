package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.DTO.ProjectDTO

interface IProjectRepository {
    suspend fun getAllProjects(): Result<List<ProjectDTO>>
}