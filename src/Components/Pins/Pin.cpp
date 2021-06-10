/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Pin
*/

#include "Pin.hpp"

nts::Pin::Pin(int pin, std::string type)
{
    actualValue = UNDEFINED;
    backValue = UNDEFINED;
    Id = pin;
    this->type = type;
}

void nts::Pin::setBackValue(nts::Tristate backValue) {
    Pin::backValue = backValue;
}

void nts::Pin::setActualValue(nts::Tristate actualValue) {
    Pin::actualValue = actualValue;
}

nts::Tristate nts::Pin::getBackValue() const {
    return backValue;
}

nts::Tristate nts::Pin::getActualValue() const {
    return actualValue;
}

int nts::Pin::getId() const {
    return Id;
}

const std::string &nts::Pin::getType() const {
    return type;
}