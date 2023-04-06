package com.mindera.minderapeople.dto

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class PolicyDTO(
    @SerialName("id")
    val id: String,
    @SerialName("description")
    val description: String,
    @SerialName("icon_name")
    val iconName: String,
    @SerialName("policy_usage")
    val policyUsage: Int? = 0,
    @SerialName("policy_usage_limit")
    val policyUsageLimit: Int? = 0
)
