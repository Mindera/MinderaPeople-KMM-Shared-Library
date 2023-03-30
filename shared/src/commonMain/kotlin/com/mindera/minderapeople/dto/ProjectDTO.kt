package com.mindera.minderapeople.dto

import kotlinx.serialization.Serializable

@Serializable
data class ProjectDTO(
    val project_id: String,
    val project_name: String
)
