package com.mindera.minderapeople.unit.repository

import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.mocks.PolicyApiClientMock
import com.mindera.minderapeople.repository.DefaultData
import com.mindera.minderapeople.repository.PolicyRepository
import io.ktor.http.*
import kotlinx.coroutines.runBlocking
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class PolicyRepositoryTest {

    @Test
    fun getAllPoliciesForUser_successful() {
        val repo = PolicyRepository(PolicyApiClientMock())
        val policies = DefaultTestData.SUCCESSFUL_3_POLICIES

        runBlocking {
            val result = repo.getPolicies("a74b7fef-6c57-49c6-8c7c-2522a4defc70")
            assertTrue(result.isSuccess)
            assertEquals(3, result.getOrNull()?.size)
            assertEquals(policies, result.getOrNull())
        }
    }

    @Test
    fun getAllPoliciesForUser_invalidUserId() {
        val repo = PolicyRepository(PolicyApiClientMock())

        runBlocking {
            val result = repo.getPolicies("0001")
            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(DefaultData.INVALID_USER_ID, result.exceptionOrNull()?.message)
        }
    }

    @Test
    fun getAllPoliciesForUser_userIdNotFound() {
        val repo = PolicyRepository(PolicyApiClientMock())

        runBlocking {
            val result = repo.getPolicies("a74b7feh-6c57-49c6-8c7c-2522a4defc70")
            assertTrue(result.isFailure)
            assertEquals(null, result.getOrNull())
            assertEquals(HttpStatusCode.NotFound.description, result.exceptionOrNull()?.message)
        }
    }
}