package com.mindera.minderapeople

import platform.Foundation.NSUUID.Companion.UUID

actual fun randomUUID(): String = UUID().toString()