package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.apiclient.interfaces.IPolicyApiClient
import com.mindera.minderapeople.dto.PolicyDTO
import io.ktor.client.call.*
import io.ktor.client.engine.*
import io.ktor.client.request.*
import io.ktor.http.*

class PolicyApiClient(engine: HttpClientEngine): IPolicyApiClient {

    private val apiHttpClient = ApiHttpClient(engine)
    private val httpClient = apiHttpClient.httpClient

    override suspend fun getAllPolicies(userId: String): Result<List<PolicyDTO>> {
        return try {
            val response = httpClient.get("${apiHttpClient.url}/policies") {
                parameter("userId", userId)
            }
            if (response.status == HttpStatusCode.OK)
                Result.success(response.body())
            else
                Result.failure(Exception(response.status.description))
        } catch (e: Exception) {
            Result.failure(e)
        }
    }
}