package com.mindera.minderapeople.unit.repository

import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.mocks.ProjectApiClientMock
import com.mindera.minderapeople.repository.ProjectRepository
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class ProjectRepositoryTest {

     private val validResponseWithElements = DefaultTestData.SUCCESSFUL_3_PROJECTS

     @Test
     fun `test getAllProjects returns success and a list if API request was valid and there are objects`(){
          val apiClient = ProjectApiClientMock()
          val projectRepo = ProjectRepository(apiClient)

          runBlocking {
               val result = projectRepo.getAllProjects()

               assertTrue(result.isSuccess)
               assertEquals(3, result.getOrNull()?.size)
               assertEquals(validResponseWithElements, result.getOrNull())
          }
     }
}