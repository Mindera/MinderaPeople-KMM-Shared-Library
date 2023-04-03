package com.mindera.minderapeople.apiclient

import io.ktor.client.*
import io.ktor.client.engine.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.Json

class  MinderaPeopleAPIClient(engine:HttpClientEngine) {
    companion object {
        const val BASE_URL = "http://localhost:3000/api"
    }

    val httpClient = HttpClient (engine){
        install(ContentNegotiation) {
            json(Json {
                ignoreUnknownKeys = true
                useAlternativeNames = false
            })
        }
    }
}