package com.mindera.minderapeople.repository.interfaces

import com.mindera.minderapeople.dto.PartOfDayDTO

interface IPartOfDayRepository {

    suspend fun getPartsOfDay(): Result<List<PartOfDayDTO>>
}