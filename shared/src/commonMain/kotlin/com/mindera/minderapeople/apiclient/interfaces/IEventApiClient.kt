package com.mindera.minderapeople.apiclient.interfaces

import com.mindera.minderapeople.dto.EventDTO

interface IEventApiClient {
    suspend fun getEventById(userId: String, eventId: String): Result<EventDTO>
}