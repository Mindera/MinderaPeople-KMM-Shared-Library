package com.mindera.minderapeople.mocks

import com.mindera.minderapeople.dto.*

object DefaultTestData {

    val SUCCESSFUL_3_POLICIES = listOf(
        PolicyDTO("0001", "Work from home", "wfh"),
        PolicyDTO("0002", "Holidays", "holidays", 5, 20),
        PolicyDTO("0002", "Sick Day", "sickday")
    )

    val SUCCESSFUL_3_PARTS_OF_DAY = listOf(
        PartOfDayDTO("0001", "Morning", "morning"),
        PartOfDayDTO("0002", "Afternoon", "afternoon"),
        PartOfDayDTO("0003", "Full day", "fullday")
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
            "travel"
        ),
        "2023-04-03",
        "2023-04-10",
        PartOfDayDTO(
            "0001",
            "Full day",
            "fullday"
        )
    )
    val CORRECT_NEW_EVENT = CreatingEventDTO(
        PolicyDTO(
            "0001",
            "Travel",
            "travel"
        ),
        "2023-04-03",
        "2023-04-10",
        PartOfDayDTO(
            "0001",
            "Full day",
            "fullday"
        )
    )
    val ERROR_EVENT = EventDTO(
        "f4b20503-0a30-4e76-8796-aee78726139f",
        PolicyDTO(
            "0001",
            "Travel",
            "travel"
        ),
        "2023-04-03",
        "2023-04-10",
        PartOfDayDTO(
            "0001",
            "Full day",
            "fullday"
        )
    )
    val EVENT_LIST = listOf(
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee78726139f",
            PolicyDTO(
                "0001",
                "Travel",
                "travel"
            ),
            "2023-04-03",
            "2023-04-10",
            PartOfDayDTO(
                "0001",
                "Full day",
                "fullday"
            )
        ),
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee787261387",
            PolicyDTO(
                "0002",
                "Sick day",
                "sickday"
            ),
            "2023-05-03",
            "2023-05-10",
            PartOfDayDTO(
                "0002",
                "Morning",
                "morning"
            )
        ),
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee787261399",
            PolicyDTO(
                "0003",
                "Holidays",
                "holidays"
            ),
            "2023-06-03",
            "2023-06-10",
            PartOfDayDTO(
                "0001",
                "Full day",
                "fullday"
            )
        ),
        EventDTO(
            "f4b20503-0a30-4e76-8796-aee787661387",
            PolicyDTO(
                "0006",
                "Carnival",
                "carnival"
            ),
            "2023-02-03",
            "2023-02-03",
            PartOfDayDTO(
                "0001",
                "Full day",
                "fullday"
            )
        )
    )
}