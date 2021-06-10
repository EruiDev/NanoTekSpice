/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** ComponentNameException
*/

#include "ComponentNameException.hpp"

ComponentNameException::ComponentNameException() : MainException("ComponentName error")
{
}

ComponentNameException::ComponentNameException(std::string str) : MainException(str)
{
}