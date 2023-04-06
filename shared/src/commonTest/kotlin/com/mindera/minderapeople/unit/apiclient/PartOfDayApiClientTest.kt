package com.mindera.minderapeople.unit.apiclient

import com.mindera.minderapeople.apiclient.PartOfDayApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import io.ktor.client.engine.mock.*
import io.ktor.http.*
import io.ktor.utils.io.*
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class PartOfDayApiClientTest {

    @Test
    fun getAllPartsOfDay_successful() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.SUCCESSFUL_3_PARTS_OF_DAY)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }

        runBlocking {
            val client = PartOfDayApiClient(mockEngine)
            val result = client.getPartsOfDay()

            assertEquals(3, result.getOrNull()?.size)
            assertEquals(DefaultTestData.SUCCESSFUL_3_PARTS_OF_DAY, result.getOrNull())
            assertTrue(result.isSuccess)
        }
    }

    @Test
    fun getAllPartsOfDay_badRequest() {
        val mockEngine = MockEngine {
            respondBadRequest()
        }

        runBlocking {
            val client = PartOfDayApiClient(mockEngine)
            val result = client.getPartsOfDay()

            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.BadRequest.description, result.exceptionOrNull()?.message)
            assertTrue(result.isFailure)
        }
    }

    @Test
    fun getAllPoliciesForUser_Exception() {
        val errorMessage = "Error"
        val mockEngine = MockEngine {
            throw Exception(errorMessage)
        }

        runBlocking {
            val client = PartOfDayApiClient(mockEngine)
            val result = client.getPartsOfDay()

            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(errorMessage, result.exceptionOrNull()?.message)
        }
    }
}