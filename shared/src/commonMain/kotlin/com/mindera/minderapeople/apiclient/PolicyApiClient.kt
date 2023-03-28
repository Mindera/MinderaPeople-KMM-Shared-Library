package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.DTO.PolicyDTO
import com.mindera.minderapeople.apiclient.interfaces.IPolicyApiClient
import io.ktor.client.*

class PolicyApiClient: IPolicyApiClient {

    private val httpClient = HttpClient()

    override suspend fun getAllPolicies(): Result<List<PolicyDTO>> {
        TODO("Not yet implemented")
    }
}