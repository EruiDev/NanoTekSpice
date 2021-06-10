#ifndef ComponentDuplicateEXCEPTION_HPP_
#define ComponentDuplicateEXCEPTION_HPP_

#include <iostream>
#include <exception>
#include "MainException.hpp"

class ComponentDuplicateException : public MainException {
	public:
		ComponentDuplicateException();
		ComponentDuplicateException(std::string str);
		~ComponentDuplicateException() = default;
};

#endif /* !ComponentDuplicateEXCEPTION_HPP_ */