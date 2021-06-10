/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** InputException
*/

#ifndef INPUTEXCEPTION_HPP_
#define INPUTEXCEPTION_HPP_

#include <iostream>
#include <exception>
#include "MainException.hpp"

class InputException : public MainException {
    public:
        InputException();
        InputException(std::string str);
        ~InputException() = default;
};

#endif /* !INPUTEXCEPTION_HPP_ */