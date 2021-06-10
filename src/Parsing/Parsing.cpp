/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Parsing
*/

#include "Parsing.hpp"

nts::Parsing::Parsing(char **av)
{
    getFileContent(av);
    splitContent();
    setChipsets();
    setLinks();
}

nts::Parsing::~Parsing() {}

const std::vector<std::vector<std::string>> &nts::Parsing::getChipsets() const {
    return chipsets;
}

const std::vector<std::vector<std::string>> &nts::Parsing::getLinks() const {
    return links;
}


void nts::Parsing::getFileContent(char **av)
{
    std::ifstream stream;
    std::string buffer;

    stream.open(av[1]);
    if (!stream) {
        throw InputException("No such file existing");
    }
    std::string fn(av[1]);
    if (!(fn.substr(fn.find_last_of(".") + 1) == "nts")) {
        throw InputException("Wrong extension");
    }
    while (getline(stream, buffer)) {
        removeComments(buffer);
    }
    stream.close();
}

void nts::Parsing::removeComments(std::string buffer)
{
    if (buffer.find('#') == 0 || buffer[0] == '\0')
        return;
    else if (buffer.find('#') != std::string::npos) {
        fileContent.push_back(buffer.substr(0, buffer.find('#')));
    } else
        fileContent.push_back(buffer);
}

void nts::Parsing::splitContent()
{
    int chipsetPosition = 0;
    int linksPosition = 0;

    for (int f = 0; fileContent.size() != f; f++) {
        if (fileContent[f].find(".chipsets:") == 0)
            chipsetPosition = f + 1;
        if (fileContent[f].find(".links:") == 0)
            linksPosition = f;
    }
    if (chipsetPosition == 0 || linksPosition == 0)
        throw SyntaxException("Missing chipset or links prototype");

    if (chipsetPosition > linksPosition)
        throw SyntaxException("Incorrect order syntax error");

    for (int f = chipsetPosition; fileContent.size() != f; f++) {
        if (f == linksPosition)
            continue;
        else if (f < linksPosition)
            chipsetSplited.push_back(fileContent[f]);
        else
            linksSplited.push_back(fileContent[f]);
    }
}

void nts::Parsing::setChipsets()
{
    for (std::string line : chipsetSplited) {
        std::vector<std::string> tmp;

        line = utils::reduce(line);

        if (line.find(' ') == std::string::npos
            || line.find(' ') != line.find_last_of(' '))
            throw SyntaxException("Syntax error in chipsets");

        tmp.push_back(line.substr(0, line.find(' ')));
        tmp.push_back(line.substr(line.find(' ') + 1, std::string::npos));
        chipsets.push_back(tmp);
    }
}

void nts::Parsing::setLinks()
{
    for (std::string line : linksSplited) {
        std::vector<std::string> tmp;

        line = utils::reduce(line);

        if (std::count(line.begin(), line.end(), ':' != 2))
            throw SyntaxException("Syntax error in links");

        if (line.find(' ') == std::string::npos
            || line.find(' ') != line.find_last_of(' '))
            throw SyntaxException("Syntax error in links");

        tmp.push_back(line.substr(0, line.find(':')));
        tmp.push_back(line.substr(line.find(':') + 1, line.find(' ') - line.find(':') - 1));

        if (!utils::is_number(tmp[1]))
            throw SyntaxException("Invalid pin");

        tmp.push_back(line.substr(line.find(' ') + 1, line.find_last_of(':') - line.find(' ') - 1));
        tmp.push_back(line.substr(line.find_last_of(':') + 1, std::string::npos));

        if (!utils::is_number(tmp[3]))
            throw SyntaxException("Invalid pin");            

        links.push_back(tmp);
    }
}