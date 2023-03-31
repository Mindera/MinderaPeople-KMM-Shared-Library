package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.dto.PartOfDayDTO
import com.mindera.minderapeople.dto.PolicyDTO

object DefaultTestData {

    val SUCCESSFUL_3_POLICIES = listOf(
        PolicyDTO("0001", "Work from home", "defaultIcon"),
        PolicyDTO("0002", "Holidays", "defaultIcon", 5, 20),
        PolicyDTO("0002", "Sick Day", "defaultIcon")
    )

    val SUCCESSFUL_3_PARTS_OF_DAY = listOf(
        PartOfDayDTO("0001", "Morning", "defaultIcon"),
        PartOfDayDTO("0002", "Afternoon", "defaultIcon"),
        PartOfDayDTO("0003", "Full day", "defaultIcon")
    )
}