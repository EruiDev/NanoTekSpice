/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** MainException
*/

#ifndef MAINEXCEPTION_HPP_
#define MAINEXCEPTION_HPP_

#include <iostream>
#include <exception>

class MainException : public std::exception {
    public:
    MainException();
    MainException(std::string str);
    ~MainException() = default;

    char const *what() const noexcept;

    private:
        std::string exceptionMessage;
};

#endif /* !MAINEXCEPTION_HPP_ */