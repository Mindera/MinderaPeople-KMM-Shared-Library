package com.mindera.minderapeople.dto

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class EventDTO(
    val id: String? = null,
    val policy: PolicyDTO,
    @SerialName("start_date") val startDate: String,
    @SerialName("end_date") val endDate: String,
    @SerialName("part_day") val partOfDay: PartOfDayDTO,
    @SerialName("additional_info") val additionalInfo: String? = "",
    @SerialName("includes_breakfast") val includesBreakfast: Boolean? = null,
    val city: String? = null,
    val project: ProjectDTO? = null
)
