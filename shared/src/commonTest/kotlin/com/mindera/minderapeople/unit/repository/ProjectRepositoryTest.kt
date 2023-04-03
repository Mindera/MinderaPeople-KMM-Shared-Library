package com.mindera.minderapeople.unit.repository

import com.mindera.minderapeople.apiclient.interfaces.IProjectsApiClient
import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.repository.ProjectRepositoryImpl
import io.mockative.Mock
import io.mockative.classOf
import io.mockative.given
import io.mockative.mock
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue


class ProjectRepositoryTest {
     @Mock
     private val api = mock(classOf<IProjectsApiClient>())

     private val validResponseWithElements = listOf(
          ProjectDTO("anova0001","Anova(Unify)"),
          ProjectDTO("farfetch0001","Farfetch (PH Portugal)"),
          ProjectDTO("farfetch0002","Farfetch (FF Harrods)")
     )

     private val validResponseWithoutElements = listOf<ProjectDTO>()

     @Test
     fun `test getAllProjects returns success and a list if API request was valid and there are objects`(){
          given(api).suspendFunction(api::getAllProjects)
               .whenInvoked()
               .then { Result.success(validResponseWithElements) }
          val projectRepo = ProjectRepositoryImpl(api)

          runBlocking {
               val result = projectRepo.getAllProjects()

               assertTrue(result.isSuccess)
               assertEquals(3, result.getOrNull()?.size)
               assertEquals(validResponseWithElements, result.getOrNull())
          }
     }

     @Test
     fun `test getAllProjects returns success and a empty list if API request was valid and there are no objects`() {
          given(api).suspendFunction(api::getAllProjects)
               .whenInvoked()
               .then { Result.success(validResponseWithoutElements) }
          val projectRepo = ProjectRepositoryImpl(api)

          runBlocking {
               val result = projectRepo.getAllProjects()

               assertTrue(result.isSuccess)
               assertEquals(0, result.getOrNull()?.size)
               assertEquals(validResponseWithoutElements, result.getOrNull())
          }
     }

     @Test
     fun `test getAllProjects returns failure`() {
          val errorMessage = "Server could not handle request"

          given(api).suspendFunction(api::getAllProjects)
               .whenInvoked()
               .then{ Result.failure(Exception(errorMessage))}
          val projectRepo = ProjectRepositoryImpl(api)

          runBlocking {
               val result = projectRepo.getAllProjects()

               assertTrue(result.isFailure)
               assertEquals(null, result.getOrNull())
               assertEquals(errorMessage, result.exceptionOrNull()?.message)
          }
     }
}