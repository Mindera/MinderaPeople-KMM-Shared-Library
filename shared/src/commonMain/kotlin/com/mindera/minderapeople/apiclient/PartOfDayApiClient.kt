package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.apiclient.interfaces.IPartOfDayApiClient
import com.mindera.minderapeople.dto.PartOfDayDTO
import io.ktor.client.call.body
import io.ktor.client.engine.HttpClientEngine
import io.ktor.client.request.*
import io.ktor.http.*

class PartOfDayApiClient(engine: HttpClientEngine): IPartOfDayApiClient {

    private val httpClient = ApiHttpClient(engine).httpClient

    override suspend fun getPartsOfDay(): Result<List<PartOfDayDTO>> {
        return try {
            val response = httpClient.get("${ApiDefaultData.BASE_URL}/partsday")

            if (response.status == HttpStatusCode.OK)
                return Result.success(response.body())
            else
                return Result.failure(Exception(response.status.description))

        } catch (e: Exception) {
            Result.failure(e)
        }
    }
}