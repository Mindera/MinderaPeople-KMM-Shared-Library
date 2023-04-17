package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.dto.*

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

    val SUCCESSFUL_3_PROJECTS = listOf(
        ProjectDTO("anova0001","Anova(Unify)"),
        ProjectDTO("farfetch0001","Farfetch (PH Portugal)"),
        ProjectDTO("farfetch0002","Farfetch (FF Harrods)")
    )

    //Events
    const val USER_ID_CORRECT = "3b1276b3-d2f6-4e29-af8f-a0cb00208dda"
    const val EVENT_ID_CORRECT = "f4b20503-0a59-4e76-8796-aee78726139f"
    const val POLICY_ID_CORRECT = "001"
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
    val CORRECT_NEW_EVENT = CreatingEventDTO(
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