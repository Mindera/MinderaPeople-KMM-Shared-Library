package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.apiclient.interfaces.IPartOfDayApiClient
import com.mindera.minderapeople.dto.PartOfDayDTO

class PartOfDayApiClientMock: IPartOfDayApiClient {

    override suspend fun getPartsOfDay(): Result<List<PartOfDayDTO>> {
        return Result.success(DefaultTestData.SUCCESSFUL_3_PARTS_OF_DAY)
    }
}