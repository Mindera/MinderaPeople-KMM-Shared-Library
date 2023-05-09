package com.mindera.minderapeople.unit.apiClient

import com.mindera.minderapeople.apiclient.ProjectApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import kotlin.test.Test
import io.ktor.client.engine.mock.*
import io.ktor.http.HttpStatusCode
import io.ktor.http.headersOf
import io.ktor.http.HttpHeaders
import io.ktor.utils.io.ByteReadChannel
import kotlinx.coroutines.test.runTest
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class ProjectApiClientTest {

    private val validResponseWithElements = Json.encodeToString(DefaultTestData.SUCCESSFUL_3_PROJECTS)
    private val validResponseWithoutElements = """[]"""
    @Test
    fun `test getAllProjects returns success and a list if API request was valid and there are objects`() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(validResponseWithElements),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val result = apiClient.getAllProjects()

            assertTrue(result.isSuccess)
            assertEquals(3, result.getOrNull()?.size)
        }
    }

    @Test
    fun `test getAllProjects returns success and an empty list if API request was valid and there are no objects`() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(validResponseWithoutElements),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val result = apiClient.getAllProjects()

            assertTrue(result.isSuccess)
            assertEquals(0, result.getOrNull()?.size)
        }
    }

    @Test
    fun `test getAllProjects returns failure if badRequest`() {

        val mockEngine = MockEngine {
            respondBadRequest()
        }

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val result = apiClient.getAllProjects()

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

        runTest {
            val apiClient = ProjectApiClient(mockEngine)
            val result = apiClient.getAllProjects()

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(errorMessage, result.exceptionOrNull()?.message)
        }
    }
}
