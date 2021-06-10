/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Input
*/

#include "Input.hpp"

nts::Input::Input()
{
    type = "Input";
    pinMap = new PinMap;
    pinMap->addInputPin(1);
}

void nts::Input::dump() const {

}

nts::PinMap *nts::Input::getPinMap()
{
    return pinMap;
}