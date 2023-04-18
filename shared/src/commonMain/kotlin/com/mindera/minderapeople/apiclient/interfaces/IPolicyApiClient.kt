package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.PolicyDTO

interface IPolicyApiClient {
    suspend fun getAllPolicies(userId: String): Result<List<PolicyDTO>>
}