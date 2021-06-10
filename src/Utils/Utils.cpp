/*
** EPITECH PROJECT, 2021
** OOP
** File description:
** Utils
*/

#include "Utils.hpp"

void utils::usage()
{
    std::cout << "The simulator also reads the standard input for the "
                 "following commands:\n\t•exit: closes the program.\n\t"
                 "•display: prints the current tick and the value of all"
                 " inputs and outputs the standard output, each sorted by"
                 " name in ASCII order.\n\t•input=value: changes the value"
                 " of an input. Possible value are 0 , 1 and U . This also"
                 " apply to clocks.\n\t•simulate: simulate a tick of the"
                 " circuit.\n\t•loop: continuously runs the simulation "
                 "( simulate , display , simulate , . . . ) without"
                 " displaying a prompt, until SIGINT is received.\n\t"
                 "•dump: calls the dump method of every component. The"
                 " output format is free." << std::endl;
}

void utils::prompt()
{
    std::cout << "> ";
}

std::string utils::trim(const std::string& str, const std::string& whitespace)
{
    const auto strBegin = str.find_first_not_of(whitespace);

    if (strBegin == std::string::npos)
        return "";

    const auto strEnd = str.find_last_not_of(whitespace);
    const auto strRange = strEnd - strBegin + 1;

    return str.substr(strBegin, strRange);
}

std::string utils::reduce(const std::string& str, const std::string& fill,
                   const std::string& whitespace)
{
    auto result = trim(str, whitespace);
    auto beginSpace = result.find_first_of(whitespace);

    while (beginSpace != std::string::npos)
    {
        const auto endSpace = result.find_first_not_of(whitespace, beginSpace);
        const auto range = endSpace - beginSpace;

        result.replace(beginSpace, range, fill);

        const auto newStart = beginSpace + fill.length();
        beginSpace = result.find_first_of(whitespace, newStart);
    }

    return result;
}

bool utils::is_number(const std::string& s)
{
    return !s.empty() && std::find_if(
        s.begin(), 
        s.end(),
        [](unsigned char c) {
            return !std::isdigit(c);
        }
    ) == s.end();
}