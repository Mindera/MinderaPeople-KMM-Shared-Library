package com.mindera.minderapeople.integration.partofday

import com.mindera.minderapeople.apiclient.PartOfDayApiClient
import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.repository.PartOfDayRepository
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

class PartOfDayIntegrationTests {

    @Test
    fun getAllPartsOfDay_successful() {
        val mockEngine = MockEngine {
            respond(
                content = ByteReadChannel(Json.encodeToString(DefaultTestData.SUCCESSFUL_3_PARTS_OF_DAY)),
                status = HttpStatusCode.OK,
                headers = headersOf(HttpHeaders.ContentType, "application/json")
            )
        }
        val apiClient = PartOfDayApiClient(mockEngine)
        val repo = PartOfDayRepository(apiClient)

        runBlocking {
            val result = repo.getPartsOfDay()
            assertTrue(result.isSuccess)
            assertEquals(3, result.getOrNull()?.size)
            assertEquals(DefaultTestData.SUCCESSFUL_3_PARTS_OF_DAY, result.getOrNull())
        }
    }

    @Test
    fun getAllPartsOfDay_badRequest() {
        val mockEngine = MockEngine {
            respondError(
                status = HttpStatusCode.BadRequest
            )
        }
        val apiClient = PartOfDayApiClient(mockEngine)
        val repo = PartOfDayRepository(apiClient)

        runBlocking {
            val result = repo.getPartsOfDay()
            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.BadRequest.description, result.exceptionOrNull()?.message)
        }
    }
}