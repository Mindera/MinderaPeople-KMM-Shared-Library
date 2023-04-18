package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.PolicyDTO

interface IPolicyRepository {
    suspend fun getPolicies(userId: String): Result<List<PolicyDTO>>
}