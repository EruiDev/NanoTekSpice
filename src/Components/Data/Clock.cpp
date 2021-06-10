/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Clock
*/

#include "Clock.hpp"

nts::Clock::Clock()
{
    type = "Clock";
    pinMap = new PinMap;
    pinMap->addInputPin(1);
}

void nts::Clock::dump() const {

}

void nts::Clock::compute()
{
    pinMap->getPin(1)->setActualValue(
        nts::logic::_not(pinMap->getPin(1)->getActualValue())
    );
}

nts::PinMap *nts::Clock::getPinMap()
{
    return pinMap;
}