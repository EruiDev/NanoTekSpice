/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** ComponentTypeException
*/

#include "ComponentTypeException.hpp"

ComponentTypeException::ComponentTypeException() : MainException("ComponentType error")
{
}

ComponentTypeException::ComponentTypeException(std::string str) : MainException(str)
{
}