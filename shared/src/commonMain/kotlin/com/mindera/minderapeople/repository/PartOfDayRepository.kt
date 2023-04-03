package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IPartOfDayApiClient
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.repository.interfaces.IPartOfDayRepository

class PartOfDayRepository(private val apiClient: IPartOfDayApiClient) : IPartOfDayRepository {

    override suspend fun getPartsOfDay(): Result<List<PartOfDayDTO>> {
        return apiClient.getPartsOfDay()
    }
}