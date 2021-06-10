/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** True
*/

#include "True.hpp"

nts::True::True()
{
    type = "True";
    pinMap = new PinMap;
    pinMap->addInputPin(1);
}

void nts::True::dump() const
{

}

nts::PinMap *nts::True::getPinMap()
{
    return pinMap;
}