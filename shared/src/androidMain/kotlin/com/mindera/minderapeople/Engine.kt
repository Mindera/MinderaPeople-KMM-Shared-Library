package com.mindera.minderapeople

import io.ktor.client.engine.*
import io.ktor.client.engine.okhttp.*

actual fun getEngine(): HttpClientEngine = OkHttp.create()