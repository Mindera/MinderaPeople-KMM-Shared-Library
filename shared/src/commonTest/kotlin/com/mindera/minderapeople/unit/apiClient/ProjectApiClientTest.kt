package com.mindera.minderapeople.unit.apiClient

import com.mindera.minderapeople.apiclient.ProjectApiClientImpl
import kotlin.test.Test
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class ProjectApiClientTest {

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


    @Test
    fun `test getAllProjects returns success and a list if API request was valid and there are objects`() {
        val mockEngine = MockEngine { request ->
            respond(
                content = ByteReadChannel(validResponseWithElements),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = ProjectApiClientImpl(mockEngine)
            val result = client.getAllProjects()

            assertTrue(result.isSuccess)
            assertEquals(3, result.getOrNull()?.size)
        }
    }

    @Test
    fun `test getAllProjects returns success and an empty list if API request was valid and there are no objects`() {
        val mockEngine = MockEngine { request ->
            respond(
                content = ByteReadChannel(validResponseWithoutElements),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = ProjectApiClientImpl(mockEngine)
            val result = client.getAllProjects()

            assertTrue(result.isSuccess)
            assertEquals(0, result.getOrNull()?.size)
        }
    }

    @Test
    fun `test getAllProjects returns failure if badRequest`() {

        val mockEngine = MockEngine {
            respondBadRequest()
        }

        runBlocking {
            val client = ProjectApiClientImpl(mockEngine)
            val result = client.getAllProjects()

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.BadRequest.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun `test getAllProjects returns failure when Exception is thrown`() {
        val errorMessage = "Error"

        val mockEngine = MockEngine {
            throw Exception(errorMessage)
        }

        runBlocking {
            val client = ProjectApiClientImpl(mockEngine)
            val result = client.getAllProjects()

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(errorMessage, result.exceptionOrNull()?.message)
        }
    }
}
