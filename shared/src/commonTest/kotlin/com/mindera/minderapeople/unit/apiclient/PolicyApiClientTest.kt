package com.mindera.minderapeople.unit.apiclient

import com.mindera.minderapeople.apiclient.PolicyApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import kotlinx.serialization.encodeToString
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.json.Json
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue


class PolicyApiClientTest {

    @Test
    fun getAllPoliciesForUser_successful() {

        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.SUCCESSFUL_3_POLICIES)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = PolicyApiClient(mockEngine)
            val result = client.getAllPolicies("a74b7fef-6c57-49c6-8c7c-2522a4defc70")

            assertEquals(3, result.getOrNull()?.size)
            assertTrue(result.isSuccess)
        }
    }

    @Test
    fun getAllPoliciesForUser_badRequest() {

        val mockEngine = MockEngine {
            respondBadRequest()
        }

        runBlocking {
            val client = PolicyApiClient(mockEngine)
            val result = client.getAllPolicies("0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.BadRequest.description, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun getAllPoliciesForUser_Exception() {
        val errorMessage = "Error"
        val mockEngine = MockEngine {
            throw Exception(errorMessage)
        }

        runBlocking {
            val client = PolicyApiClient(mockEngine)
            val result = client.getAllPolicies("0001")

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(errorMessage, result.exceptionOrNull()?.message)
        }
    }
}