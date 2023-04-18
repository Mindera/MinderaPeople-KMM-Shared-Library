package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.apiclient.interfaces.IPolicyApiClient
import com.mindera.minderapeople.dto.PolicyDTO
import io.ktor.http.*

class PolicyApiClientMock: IPolicyApiClient {

    override suspend fun getAllPolicies(userId: String): Result<List<PolicyDTO>> {
        if (userId != "knownId")
            return Result.failure(Exception(HttpStatusCode.NotFound.description))
        return Result.success(DefaultTestData.SUCCESSFUL_3_POLICIES)
    }
}