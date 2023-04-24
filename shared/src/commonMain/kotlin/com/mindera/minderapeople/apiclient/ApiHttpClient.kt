package com.mindera.minderapeople.apiclient

import com.mindera.minderapeople.getEngine
import io.ktor.client.*
import io.ktor.client.engine.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.serialization.kotlinx.json.*
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