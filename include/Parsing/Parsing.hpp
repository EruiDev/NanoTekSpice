/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Parsing
*/

#ifndef PARSING_H_
#define PARSING_H_

#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include "Utils.hpp"
#include "InputException.hpp"
#include "SyntaxException.hpp"

namespace nts {
	class Parsing {
	public:
		Parsing(char **av);
		~Parsing();

        const std::vector<std::vector<std::string>> &getChipsets() const;
        const std::vector<std::vector<std::string>> &getLinks() const;

    private:
        void getFileContent(char **av);
        void removeComments(std::string buffer);
        void splitContent();
        void setChipsets();
        void setLinks();

        std::vector<std::vector<std::string>> chipsets;
		std::vector<std::vector<std::string>> links;
        std::vector<std::string> fileContent;
        std::vector<std::string> chipsetSplited;
        std::vector<std::string> linksSplited;
    };
}

#endif /* !PARSING_H_ */