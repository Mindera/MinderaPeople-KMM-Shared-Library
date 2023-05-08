package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.getEngine
import io.ktor.client.HttpClient
import io.ktor.client.engine.HttpClientEngine
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.json.Json

class ApiHttpClient(engine: HttpClientEngine = getEngine()) {

    val httpClient = HttpClient(engine) {
        install(ContentNegotiation) {
            json(Json {
                ignoreUnknownKeys = ApiDefaultData.API_IGNORE_UNKNOWN_KEYS
            })
        }
    }
}