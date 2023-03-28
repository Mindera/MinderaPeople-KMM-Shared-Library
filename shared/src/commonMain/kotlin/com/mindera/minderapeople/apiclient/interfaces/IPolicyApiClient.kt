package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.DTO.PolicyDTO

interface IPolicyApiClient {
    suspend fun getAllPolicies(): Result<List<PolicyDTO>>
}