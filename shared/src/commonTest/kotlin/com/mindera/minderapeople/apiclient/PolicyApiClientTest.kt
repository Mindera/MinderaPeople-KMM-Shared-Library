package com.mindera.minderapeople.apiclient

import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue


class PolicyApiClientTest {

    private val successfulResponse = """
        [
             {
                 "id": "policy1",
                 "description": "Working from home",
                 "icon_name": "Default_Icon"
             },
             {
                 "id": "policy2",
                 "description": "Working remotely",
                 "icon_name": "Default_Icon"
             },
             {
                 "id": "policy3",
                 "description": "Vacations, PT",
                 "icon_name": "Default_Icon",
                 "policy_usage": 22,
                 "policy_usage_limit": 28
             }
        ]  
    """

    @Test
    fun getAllPoliciesForUser_successful() {

        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(successfulResponse),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = PolicyApiClient(mockEngine)
            val result = client.getAllPolicies("0001")

            assertEquals(3, result.getOrNull()?.size, "Returned list of 12 policies")
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