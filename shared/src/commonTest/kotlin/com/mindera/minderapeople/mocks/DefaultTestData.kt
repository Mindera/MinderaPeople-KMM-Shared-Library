package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.dto.PolicyDTO

object DefaultTestData {

    val SUCCESSFUL_3_POLICIES = listOf(
        PolicyDTO("0001", "Work from home", "defaultIcon"),
        PolicyDTO("0002", "Holidays", "defaultIcon", 5, 20),
        PolicyDTO("0002", "Sick Day", "defaultIcon")
    )
}