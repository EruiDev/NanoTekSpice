#ifndef ComponentTypeEXCEPTION_HPP_
#define ComponentTypeEXCEPTION_HPP_

#include <iostream>
#include <exception>
#include "MainException.hpp"

class ComponentTypeException : public MainException {
	public:
		ComponentTypeException();
		ComponentTypeException(std::string str);
		~ComponentTypeException() = default;
};

#endif /* !ComponentTypeEXCEPTION_HPP_ */