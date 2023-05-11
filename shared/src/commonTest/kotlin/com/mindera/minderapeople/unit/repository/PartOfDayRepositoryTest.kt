package com.mindera.minderapeople.unit.repository

import com.mindera.minderapeople.mocks.DefaultTestData
import com.mindera.minderapeople.mocks.PartOfDayApiClientMock
import com.mindera.minderapeople.repository.PartOfDayRepository
import kotlinx.coroutines.test.runTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class PartOfDayRepositoryTest {

    @Test
    fun getAllPartOfDay_successful() {
        val client = PartOfDayApiClientMock()
        val repo = PartOfDayRepository(client)

        runTest {
            val result = repo.getPartsOfDay()

            assertTrue(result.isSuccess)
            assertEquals(3, result.getOrNull()?.size)
            assertEquals(DefaultTestData.SUCCESSFUL_3_PARTS_OF_DAY, result.getOrNull())
        }
    }
}