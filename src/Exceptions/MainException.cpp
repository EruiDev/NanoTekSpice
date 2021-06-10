/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** MainException
*/

#include "MainException.hpp"

MainException::MainException()
{
    exceptionMessage = "MainException";
}

MainException::MainException(std::string str)
{
    exceptionMessage = str;
}

char const *MainException::what() const noexcept
{
    return exceptionMessage.c_str();
}