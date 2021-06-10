#ifndef ChipsetMissingEXCEPTION_HPP_
#define ChipsetMissingEXCEPTION_HPP_

#include <iostream>
#include <exception>
#include "MainException.hpp"

class ChipsetMissingException : public MainException {
	public:
		ChipsetMissingException();
		ChipsetMissingException(std::string str);
		~ChipsetMissingException() = default;
};

#endif /* !ChipsetMissingEXCEPTION_HPP_ */