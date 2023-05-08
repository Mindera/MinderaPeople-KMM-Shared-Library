package com.mindera.minderapeople.integration.policy

import com.mindera.minderapeople.apiclient.PolicyApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.repository.PolicyRepository
import io.ktor.client.engine.mock.*
import io.ktor.http.HttpStatusCode
import io.ktor.http.headersOf
import io.ktor.http.HttpHeaders
import io.ktor.utils.io.ByteReadChannel
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
            val result = repo.getPolicies("a74b7fef-6c57-49c6-8c7c-2522a4defc70")
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
            val result = repo.getPolicies("a74b7fef-6c57-49c6-8c7c-2522a4dxfc70")
            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }
}