package com.mindera.minderapeople.DTO

import kotlinx.serialization.Serializable

@Serializable
data class PolicyDTO(
    val id: String,
    val description: String,
    val iconName: String,
    val policyUsage: Int? = 0,
    val policyUsageLimit: Int? = 0
)
