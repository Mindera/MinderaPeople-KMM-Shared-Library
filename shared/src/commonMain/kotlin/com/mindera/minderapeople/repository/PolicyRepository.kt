package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IPolicyApiClient
import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.repository.interfaces.IPolicyRepository
import com.mindera.minderapeople.utils.RequestResult
import com.mindera.minderapeople.utils.toRequestResult

class PolicyRepository(private val apiClient: IPolicyApiClient) : IPolicyRepository {
    override suspend fun getPolicies(userId: String): RequestResult<List<PolicyDTO>> {
        return apiClient.getAllPolicies(userId).toRequestResult()
    }
}