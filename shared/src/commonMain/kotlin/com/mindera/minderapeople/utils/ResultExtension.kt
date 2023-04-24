package com.mindera.minderapeople.utils

fun <T> Result<T>.toRequestResult(): RequestResult<T> = fold(
    onSuccess = { RequestResult.success(it) },
    onFailure = { RequestResult.failure(it.cause ?: it) }
)