/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** PinMap
*/

#include "PinMap.hpp"
#include "PinException.hpp"

void nts::PinMap::addInputPin(int pin)
{
    map.insert({pin, new InputPin(pin)});
}

void nts::PinMap::addOutputPin(int pin)
{
    map.insert({pin, new OutputPin(pin)});
}

nts::Pin *nts::PinMap::getPin(int pin)
{
    return map.find(pin)->second;
}

void nts::PinMap::setPin(int pos, Pin *pin)
{
    map.find(pos)->second = pin;
}

int nts::PinMap::getSize() const {
    return map.size();
}