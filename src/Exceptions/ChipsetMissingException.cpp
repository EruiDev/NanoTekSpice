/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** ChipsetMissingException
*/

#include "ChipsetMissingException.hpp"

ChipsetMissingException::ChipsetMissingException() : MainException("ChipsetMissing error")
{
}

ChipsetMissingException::ChipsetMissingException(std::string str) : MainException(str)
{
}