package com.mindera.minderapeople.dto

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class PartOfDayDTO(
    val id: String,
    val description: String,
    val type: String,
    val time: Int
)
