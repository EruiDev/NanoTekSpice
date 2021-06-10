/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** PinException
*/

#include "PinException.hpp"

PinException::PinException() : MainException("Pin error")
{
}

PinException::PinException(std::string str) : MainException(str)
{
}