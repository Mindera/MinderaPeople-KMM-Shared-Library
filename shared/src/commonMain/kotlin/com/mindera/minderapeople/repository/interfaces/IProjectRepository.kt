package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.ProjectDTO

interface IProjectRepository {
    suspend fun getAllProjects(): Result<List<ProjectDTO>>
}