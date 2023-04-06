package com.mindera.minderapeople.repository

import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.apiclient.interfaces.IPolicyApiClient
import com.mindera.minderapeople.repository.interfaces.IPolicyRepository

class PolicyRepository(private val apiClient: IPolicyApiClient): IPolicyRepository {
    override suspend fun getPolicies(userId: String): Result<List<PolicyDTO>> {
        if(userId.matches(Regex("........-....-....-....-............")))
            return apiClient.getAllPolicies(userId)
        return Result.failure(Exception(DefaultData.INVALID_USER_ID))
    }
}