/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** SyntaxException
*/

#ifndef SYNTAXEXCEPTION_HPP_
#define SYNTAXEXCEPTION_HPP_

#include <iostream>
#include <exception>
#include "MainException.hpp"

class SyntaxException : public MainException {
	public:
		SyntaxException();
		SyntaxException(std::string str);
		~SyntaxException() = default;
};

#endif /* !SYNTAXEXCEPTION_HPP_ */