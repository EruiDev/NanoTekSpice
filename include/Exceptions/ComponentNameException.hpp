#ifndef ComponentNameEXCEPTION_HPP_
#define ComponentNameEXCEPTION_HPP_

#include <iostream>
#include <exception>
#include "MainException.hpp"

class ComponentNameException : public MainException {
	public:
		ComponentNameException();
		ComponentNameException(std::string str);
		~ComponentNameException() = default;
};

#endif /* !ComponentNameEXCEPTION_HPP_ */