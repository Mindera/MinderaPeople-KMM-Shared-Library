package com.mindera.minderapeople.dto

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class ProjectDTO(
    @SerialName("id") val id: String? = null,
    @SerialName("project_name") val projectName: String? = null
)
