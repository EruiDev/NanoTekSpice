/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** SyntaxException
*/

#include "SyntaxException.hpp"

SyntaxException::SyntaxException() : MainException("Syntax error")
{
}

SyntaxException::SyntaxException(std::string str) : MainException(str)
{
}