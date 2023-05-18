package com.mindera.minderapeople.utils

class RequestResult<T> constructor(
    private val value: T? = null,
    private val exception: Throwable? = null,
    val isSuccess: Boolean
    ) {

    companion object {
        fun <T> success(value: T): RequestResult<T> {
            return RequestResult(value, isSuccess = true)
        }

        fun <T> failure(exception: Throwable): RequestResult<T> {
            return RequestResult(exception = exception, isSuccess = false)
        }
    }

    val isFailure: Boolean get() = !isSuccess

    fun getOrNull(): T? {
        return if(!isSuccess) null
        else value
    }

    fun exceptionOrNull(): Throwable? {
        return exception
    }
}

