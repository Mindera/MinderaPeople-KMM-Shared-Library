package com.mindera.minderapeople.repository.mocks

import com.mindera.minderapeople.apiclient.interfaces.IPolicyApiClient
import com.mindera.minderapeople.dto.PolicyDTO
import io.ktor.http.*

class PolicyApiClientMock: IPolicyApiClient {


    override suspend fun getAllPolicies(userId: String): Result<List<PolicyDTO>> {
        if (userId != "a74b7fef-6c57-49c6-8c7c-2522a4defc70")
            return Result.failure(Exception(HttpStatusCode.NotFound.description))
        return Result.success(DefaultTestData.SUCCESSFUL_3_POLICIES)
    }
}