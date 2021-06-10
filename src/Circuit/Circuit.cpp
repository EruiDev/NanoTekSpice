/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Circuit
*/

#include "Circuit.hpp"

nts::Circuit::Circuit(char **av)
{
    Parsing parsed(av);
    Factory factory;
    const std::vector<std::vector<std::string>>& chipsets = parsed.getChipsets();
    const std::vector<std::vector<std::string>>& links = parsed.getLinks();

    parsed.getChipsets();
    setComponents(chipsets, factory);
    setLinks(links);
    setCommands();
}

void nts::Circuit::loop()
{
    std::string input;
    utils::prompt();

    while (getline(std::cin, input) && input != "exit") {
        if (input != "")
            execute(input);
        utils::prompt();
    }
}

void nts::Circuit::setComponents(std::vector<std::vector<std::string>> chipsets, Factory factory)
{
    for (int f = 0; chipsets.size() != f; f++) {
        componentList.insert(std::make_pair(chipsets[f][1],
            factory.createComponent(chipsets[f][0]).release()));
    }
}

void nts::Circuit::setLinks(std::vector<std::vector<std::string>> links)
{
    for (int f = 0; links.size() != f; f++) {

        auto element = componentList.find(links[f][0]);
        
        if (element == componentList.end())
            throw ComponentNameException("Component name unknown (missing previous declaration)");
            
        Pin *tmpPin = element->second->getPinMap()->getPin(std::stoi(links[f][1]));
        auto secondElement = componentList.find(links[f][2]);

        if (secondElement == componentList.end())
            throw ComponentNameException("Component name unknown (missing previous declaration)");

        PinMap *tmp = secondElement->second->getPinMap();
        tmp->setPin(std::stoi(links[f][3]), tmpPin);

        if (secondElement->second->getType() == "True") {
            secondElement->second->getPinMap()->getPin(1)->setActualValue(TRUE);
            secondElement->second->getPinMap()->getPin(1)->setBackValue(TRUE);
        } else if (secondElement->second->getType() == "False") {
            secondElement->second->getPinMap()->getPin(1)->setActualValue(TRUE);
            secondElement->second->getPinMap()->getPin(1)->setBackValue(TRUE);
        }
    }
}

void nts::Circuit::dump()
{
    std::cout << "Status:" << std::endl;
    for (auto const& pair: executionMap) {
        std::cout << "  " << pair.first << ": " << pair.second << std::endl;
    }

    std::cout << "Component:" << std::endl;
    for (auto const& pair: componentList) {
        std::cout << "  " << pair.second->getType() << ": " << pair.first << std::endl;
    }
}

void nts::Circuit::setCommands()
{
    ticks = 0;
    executionMap.insert(std::make_pair("simulate", &Circuit::simulate));
    executionMap.insert(std::make_pair("display", &Circuit::display));
    executionMap.insert(std::make_pair("dump", &Circuit::dump));
}

void nts::Circuit::execute(const std::string &command)
{
    if (command.find("=") != std::string::npos) {
        setPin(command);
        return;
    }
    auto element = executionMap.find(command);
    if (element == executionMap.end()) {
        std::cout << "Error: Command " << command << " not found" << std::endl;
        return;
    }
        (this->*element->second)();
}

void nts::Circuit::simulate()
{
    for (std::map<std::string, IComponent*>::iterator it = componentList.begin(); it != componentList.end(); it++) {
        for (int f = 0; it->second->getPinMap()->getSize() != f; f++) {
            if (it->second->getType() != "Input" &&
                it->second->getType() != "True" &&
                it->second->getType() != "False") {
                it->second->compute();
            } else {
                Tristate val = it->second->getPinMap()->getPin(
                        f + 1)->getBackValue();
                it->second->getPinMap()->getPin(f + 1)->setActualValue(val);
            }
        }
    }
    ticks++;
}

void nts::Circuit::display()
{
    std::cout << "tick: " << ticks << std::endl;
    std::cout << "input(s):" << std::endl;
    for (std::map<std::string, IComponent*>::iterator it = componentList.begin(); it != componentList.end(); it++) {
        if (it->second->getType() == "Input" || it->second->getType() == "Clock"
            || it->second->getType() == "True" || it->second->getType() == "False") {
            std::cout << "  " << it->first << ": ";
            if (it->second->getPinMap()->getPin(1)->getActualValue() == -1)
                std::cout << "U" << std::endl;
            else
                std::cout << it->second->getPinMap()->getPin(1)->getActualValue() << std::endl;
        }
    }
    std::cout << "output(s):" << std::endl;
    for (std::map<std::string, IComponent*>::iterator it = componentList.begin(); it != componentList.end(); it++) {
        if (it->second->getType() == "Output") {
            std::cout << "  " << it->first << ": ";
            if (it->second->getPinMap()->getPin(1)->getActualValue() == -1)
                std::cout << "U" << std::endl;
            else
                std::cout << it->second->getPinMap()->getPin(1)->getActualValue() << std::endl;
        }
    }
}

void nts::Circuit::setPin(const std::string &command)
{
    int pin;
    std::string name = command.substr(0, command.find("="));
    std::string temp_int;

    temp_int = command.substr(command.find("=") + 1);
    if (utils::is_number(temp_int))
        pin = std::stoi(temp_int);
    else {
        std::cout << "Error: Pin should be true or false" << std::endl;
        return;
    }
    auto element = componentList.find(name);
    if (element == componentList.end()) {
        std::cout << "Error: Component not found" << std::endl;
        return;
    }
    if (element->second->getType() == "Output") {
        std::cout << "Error: Cannot set a value to an output" << std::endl;
        return;
    }
    if (pin == 1)
        element->second->getPinMap()->getPin(1)->setBackValue(TRUE);
    else if (pin == 0)
        element->second->getPinMap()->getPin(1)->setBackValue(FALSE);
    else
        std::cout << "Error: Pin should be true or false" << std::endl;
}