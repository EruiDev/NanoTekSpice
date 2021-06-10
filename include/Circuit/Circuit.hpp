/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Circuit
*/

#ifndef CIRCUIT_HPP_
#define CIRCUIT_HPP_

#include <map>
#include <memory>

#include "Factory.hpp"
#include "Parsing.hpp"
#include "Utils.hpp"
#include "ComponentNameException.hpp"

namespace nts {
    class Circuit {
    public:
        Circuit(char **av);
        ~Circuit() = default;

        void loop();

        typedef void (nts::Circuit::*ptr)();

    private:
        void setComponents(std::vector<std::vector<std::string>> chipsets, Factory factory);
        void setLinks(std::vector<std::vector<std::string>> links);
        void setCommands();

        void setPin(const std::string &command);
        void simulate();
        void display();
        void execute(const std::string &str);
        void dump();

        std::map<std::string, IComponent*> componentList;
        std::map<std::string, ptr> executionMap;

        int ticks;
    };
}

#endif /* !CIRCUIT_HPP_ */