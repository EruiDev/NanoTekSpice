#ifndef PinEXCEPTION_HPP_
#define PinEXCEPTION_HPP_

#include <iostream>
#include <exception>
#include "MainException.hpp"

class PinException : public MainException {
	public:
		PinException();
		PinException(std::string str);
		~PinException() = default;
};

#endif /* !PinEXCEPTION_HPP_ */