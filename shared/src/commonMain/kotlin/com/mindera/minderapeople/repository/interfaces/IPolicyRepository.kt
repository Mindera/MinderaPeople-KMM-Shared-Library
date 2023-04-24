package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.PolicyDTO
import com.mindera.minderapeople.utils.RequestResult

interface IPolicyRepository {
    suspend fun getPolicies(userId: String): RequestResult<List<PolicyDTO>>
}