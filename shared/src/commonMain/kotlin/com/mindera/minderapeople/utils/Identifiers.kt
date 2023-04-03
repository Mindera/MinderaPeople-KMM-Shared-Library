package com.mindera.minderapeople.utils

object Identifiers {

    fun validateUUID(vararg ids: String): Boolean {

        for (id in ids) {
            if (!id.matches(Regex("[\\da-fA-F]{8}-[\\da-fA-F]{4}-[\\da-fA-F]{4}-[\\da-fA-F]{4}-[\\da-fA-F]{12}")))
                return false
        }
        return true
    }
}