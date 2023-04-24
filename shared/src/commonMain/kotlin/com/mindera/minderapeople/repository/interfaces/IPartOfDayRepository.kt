package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.utils.RequestResult

interface IPartOfDayRepository {

    suspend fun getPartsOfDay(): RequestResult<List<PartOfDayDTO>>
}