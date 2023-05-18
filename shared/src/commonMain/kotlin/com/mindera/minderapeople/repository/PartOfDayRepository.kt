package com.mindera.minderapeople.repository

import com.mindera.minderapeople.apiclient.interfaces.IPartOfDayApiClient
import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.repository.interfaces.IPartOfDayRepository
import com.mindera.minderapeople.utils.RequestResult
import com.mindera.minderapeople.utils.toRequestResult

class PartOfDayRepository(private val apiClient: IPartOfDayApiClient): IPartOfDayRepository {
    override suspend fun getPartsOfDay(): RequestResult<List<PartOfDayDTO>> {
        return apiClient.getPartsOfDay().toRequestResult()
    }
}