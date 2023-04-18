package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.PartOfDayDTO

interface IPartOfDayApiClient {

    suspend fun getPartsOfDay(): Result<List<PartOfDayDTO>>

}