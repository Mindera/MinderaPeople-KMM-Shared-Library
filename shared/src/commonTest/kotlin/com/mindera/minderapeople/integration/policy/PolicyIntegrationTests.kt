package com.mindera.minderapeople.integration.policy

import com.mindera.minderapeople.apiclient.PolicyApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.repository.PolicyRepository
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class PolicyIntegrationTests {

    @Test
    fun getAllPoliciesForUser_successful() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.SUCCESSFUL_3_POLICIES)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        val apiClient = PolicyApiClient(mockEngine)
        val repo = PolicyRepository(apiClient)

        runBlocking {
            val result = repo.getPolicies("knownId")
            assertTrue(result.isSuccess)
            assertEquals(3, result.getOrNull()?.size)
            assertEquals(DefaultTestData.SUCCESSFUL_3_POLICIES, result.getOrNull())
        }
    }

    @Test
    fun getAllPoliciesForUser_userNotFound() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(""),
                status = HttpStatusCode.NotFound,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        val apiClient = PolicyApiClient(mockEngine)
        val repo = PolicyRepository(apiClient)

        runBlocking {
            val result = repo.getPolicies("unknownId")
            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }
}