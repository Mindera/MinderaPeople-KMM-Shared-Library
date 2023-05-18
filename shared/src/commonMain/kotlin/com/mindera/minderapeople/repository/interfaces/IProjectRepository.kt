package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.utils.RequestResult

interface IProjectRepository {
    suspend fun getAllProjects(): RequestResult<List<ProjectDTO>>
}