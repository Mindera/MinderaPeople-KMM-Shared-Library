package com.mindera.minderapeople

import io.ktor.client.engine.*
import io.ktor.client.engine.darwin.*

actual fun getEngine(): HttpClientEngine = Darwin.create()