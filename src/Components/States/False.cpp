/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** False
*/

#include "False.hpp"

nts::False::False()
{
    type = "False";
    pinMap = new PinMap;
    pinMap->addInputPin(1);
}

void nts::False::dump() const {

}

nts::PinMap *nts::False::getPinMap()
{
    return pinMap;
}