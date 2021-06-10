/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** ComponentDuplicateException
*/

#include "ComponentDuplicateException.hpp"

ComponentDuplicateException::ComponentDuplicateException() : MainException("ComponentDuplicate error")
{
}

ComponentDuplicateException::ComponentDuplicateException(std::string str) : MainException(str)
{
}