package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.dto.EventDTO
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

    //Events
    const val USER_ID_CORRECT = "correctUserId"
    const val EVENT_ID_CORRECT = "correctEventId"
    val CORRECT_EVENT = EventDTO(
        EVENT_ID_CORRECT,
        PolicyDTO(
            "0001",
            "Travel",
            "default"
        ),
        "2023-04-03",
        "2023-04-10",
        PartOfDayDTO(
            "0001",
            "Full day",
            "default"
        )
    )
    val ERROR_EVENT = EventDTO(
        "errorEventId",
        PolicyDTO(
            "0001",
            "Travel",
            "default"
        ),
        "2023-04-03",
        "2023-04-10",
        PartOfDayDTO(
            "0001",
            "Full day",
            "default"
        )
    )
    val EVENT_LIST = listOf(
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee78726139f",
            PolicyDTO(
                "0001",
                "Travel",
                "default"
            ),
            "2023-04-03",
            "2023-04-10",
            PartOfDayDTO(
                "0001",
                "Full day",
                "default"
            )
        ),
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee787261387",
            PolicyDTO(
                "0002",
                "Sick day",
                "default"
            ),
            "2023-05-03",
            "2023-05-10",
            PartOfDayDTO(
                "0002",
                "Morning",
                "default"
            )
        ),
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee787261399",
            PolicyDTO(
                "0003",
                "Holidays",
                "default"
            ),
            "2023-06-03",
            "2023-06-10",
            PartOfDayDTO(
                "0001",
                "Full day",
                "default"
            )
        ),
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee787661387",
            PolicyDTO(
                "0006",
                "Carnival",
                "default"
            ),
            "2023-02-03",
            "2023-02-03",
            PartOfDayDTO(
                "0001",
                "Full day",
                "default"
            )
        )

    )
}