package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import com.mindera.minderapeople.dto.ProjectDTO

class ProjectApiClientMock: IProjectsApiClient {
    override suspend fun getAllProjects(): Result<List<ProjectDTO>> {
        return Result.success(DefaultTestData.SUCCESSFUL_3_PROJECTS)
    }
}