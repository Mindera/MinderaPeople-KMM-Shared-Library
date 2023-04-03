package com.mindera.minderapeople.apiclient.interfaces

interface IEventApiClient {

    suspend fun removeEventById(userId: String, eventId: String): Result<Nothing?>
}