package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.apiclient.interfaces.IPolicyApiClient
import com.mindera.minderapeople.dto.PolicyDTO
import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.client.request.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.Json

private const val BASE_URL = "http://localhost:3000/api"
class PolicyApiClient: IPolicyApiClient {

    private val httpClient = HttpClient {
        install(ContentNegotiation) {
            json(Json {
                ignoreUnknownKeys = true
                useAlternativeNames = false
            })
        }
    }

    override suspend fun getAllPolicies(userId: String): Result<List<PolicyDTO>> {
        return try {
            val response: List<PolicyDTO> = httpClient.get("${BASE_URL}/policies").body()
            Result.success(response)
        } catch (e: Exception) {
            Result.failure(e)
        }
    }
}