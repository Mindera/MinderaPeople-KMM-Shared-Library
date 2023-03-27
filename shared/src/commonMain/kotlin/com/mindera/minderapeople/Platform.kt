package com.mindera.minderapeople

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform