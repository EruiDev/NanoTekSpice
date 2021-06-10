/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Factory
*/

#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include <map>
#include <memory>
#include "Input.hpp"
#include "Output.hpp"
#include "Clock.hpp"
#include "False.hpp"
#include "True.hpp"
#include "4001.hpp"
#include "4011.hpp"
#include "4030.hpp"
#include "4069.hpp"
#include "4071.hpp"
#include "4081.hpp"
#include "ComponentTypeException.hpp"

namespace nts {
    class Factory {
    public:
        Factory();
        ~Factory() = default;

        std::unique_ptr<nts::IComponent> createComponent(std::string type);

        typedef std::unique_ptr<nts::IComponent>(Factory::*ptr)();

    private:
        std::map<std::string, ptr> components;

        std::unique_ptr<nts::IComponent> generateInput();
        std::unique_ptr<nts::IComponent> generateOutput();
        std::unique_ptr<nts::IComponent> generateClock();
        std::unique_ptr<nts::IComponent> generateFalse();
        std::unique_ptr<nts::IComponent> generateTrue();
        std::unique_ptr<nts::IComponent> generate4001();
        std::unique_ptr<nts::IComponent> generate4011();
        std::unique_ptr<nts::IComponent> generate4030();
        std::unique_ptr<nts::IComponent> generate4069();
        std::unique_ptr<nts::IComponent> generate4071();
        std::unique_ptr<nts::IComponent> generate4081();
    };
}

#endif /* !FACTORY_HPP_ */