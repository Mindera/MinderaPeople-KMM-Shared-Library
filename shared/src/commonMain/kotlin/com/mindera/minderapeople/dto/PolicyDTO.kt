package com.mindera.minderapeople.dto

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class PolicyDTO(
    val id: String,
    val description: String,
    val type: String,
    @SerialName("policy_usage") val policyUsage: Int? = 0,
    @SerialName("policy_usage_limit") val policyUsageLimit: Int? = 0
)
