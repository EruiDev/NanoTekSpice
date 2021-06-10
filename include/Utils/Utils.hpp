/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Utils
*/

#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <iostream>
#include <algorithm>

namespace utils
{
    void usage();
    void prompt();
    std::string trim(const std::string& str, const std::string& whitespace = " \t");
    std::string reduce(const std::string& str, const std::string& fill = " ",
                       const std::string& whitespace = " \t");
    bool is_number(const std::string& s);
}

#endif /* !UTILS_HPP_ */