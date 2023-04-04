package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.EventDTO

interface IEventApiClient {

    suspend fun getAllEventsForUser(userId: String): Result<List<EventDTO>>
    suspend fun removeEventById(userId: String, eventId: String): Result<Nothing?>
}
