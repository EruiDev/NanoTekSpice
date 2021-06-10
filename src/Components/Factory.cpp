/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Factory
*/

#include "Factory.hpp"

nts::Factory::Factory()
{
    components.insert(std::make_pair("input", &Factory::generateInput));
    components.insert(std::make_pair("output", &Factory::generateOutput));
    components.insert(std::make_pair("true", &Factory::generateTrue));
    components.insert(std::make_pair("false", &Factory::generateFalse));
    components.insert(std::make_pair("4001", &Factory::generate4001));
    components.insert(std::make_pair("4011", &Factory::generate4011));
    components.insert(std::make_pair("4030", &Factory::generate4030));
    components.insert(std::make_pair("4069", &Factory::generate4069));
    components.insert(std::make_pair("4071", &Factory::generate4071));
    components.insert(std::make_pair("4081", &Factory::generate4081));
}

std::unique_ptr<nts::IComponent> nts::Factory::createComponent(std::string type)
{
    auto element = components.find(type);
    if (element == components.end())
        throw ComponentTypeException("Invalid component type");
    return (this->*element->second)();
}

std::unique_ptr<nts::IComponent> nts::Factory::generateInput()
{
    return std::make_unique<nts::Input>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generateOutput()
{
    return std::make_unique<nts::Output>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generateClock()
{
    return std::make_unique<nts::Clock>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generateFalse()
{
    return std::make_unique<nts::False>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generateTrue()
{
    return std::make_unique<nts::True>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generate4001()
{
    return std::make_unique<nts::C4001>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generate4011()
{
    return std::make_unique<nts::C4011>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generate4030()
{
    return std::make_unique<nts::C4030>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generate4069()
{
    return std::make_unique<nts::C4069>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generate4071()
{
    return std::make_unique<nts::C4071>();
}

std::unique_ptr<nts::IComponent> nts::Factory::generate4081()
{
    return std::make_unique<nts::C4081>();
}