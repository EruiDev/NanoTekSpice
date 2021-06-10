/*
** EPITECH PROJECT, 2021
** OOP
** File description:
** InputException
*/

#include "InputException.hpp"

InputException::InputException() : MainException("Input error")
{

}

InputException::InputException(std::string str) : MainException(str)
{

}