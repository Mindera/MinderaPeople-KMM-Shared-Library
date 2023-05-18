package com.mindera.minderapeople.integration.projects

import com.mindera.minderapeople.apiclient.ProjectApiClient
import com.mindera.minderapeople.dto.ProjectDTO
import com.mindera.minderapeople.repository.ProjectRepository
import io.ktor.client.engine.mock.*
import io.ktor.http.HttpStatusCode
import io.ktor.http.headersOf
import io.ktor.http.HttpHeaders
import io.ktor.utils.io.ByteReadChannel
import kotlinx.coroutines.test.runTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class ProjectIntegrationTests {
    private val validResponseWithElements = """
        [
            {
                "id": "anova0001",
                "project_name": "Anova(Unify)"
            },
            {
                "id": "farfetch0001",
                "project_name": "Farfetch (PH Portugal)"
            },
            {
                "id": "farfetch0002",
                "project_name": "Farfetch (FF Harrods)"
            }
        ]
    """

    private val validResponseWithoutElements = """[]"""

    private val expectedResponseWithElements = listOf(
        ProjectDTO("anova0001","Anova(Unify)"),
        ProjectDTO("farfetch0001","Farfetch (PH Portugal)"),
        ProjectDTO("farfetch0002","Farfetch (FF Harrods)")
    )

    private val expectedResponseWithoutElements = listOf<ProjectDTO>()

    @Test
    fun `test getAllProjects returns success and a list if API request was valid and there are objects`(){
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(validResponseWithElements),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val projectRepo = ProjectRepository(apiClient)
            val result = projectRepo.getAllProjects()

            assertTrue(result.isSuccess)
            assertEquals(3, result.getOrNull()?.size)
            assertEquals(expectedResponseWithElements, result.getOrNull())
        }
    }

    @Test
    fun `test getAllProjects returns success and a empty list if API request was valid and there are no objects`() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(validResponseWithoutElements),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val projectRepo = ProjectRepository(apiClient)
            val result = projectRepo.getAllProjects()

            assertTrue(result.isSuccess)
            assertEquals(0, result.getOrNull()?.size)
            assertEquals(expectedResponseWithoutElements, result.getOrNull())
        }
    }

    @Test
    fun `test getAllProjects returns failure if badRequest`() {
        val mockEngine = MockEngine {
            respondBadRequest()
        }

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val projectRepo = ProjectRepository(apiClient)
            val result = projectRepo.getAllProjects()

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.BadRequest.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getAllProjects returns failure if Exception is thrown`() {
        val errorMessage = "Error"

        val mockEngine = MockEngine {
            throw Exception(errorMessage)
        }

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val projectRepo = ProjectRepository(apiClient)
            val result = projectRepo.getAllProjects()

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(errorMessage, result.exceptionOrNull()?.message)
        }
    }
}