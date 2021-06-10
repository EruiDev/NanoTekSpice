/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Output
*/

#include "Output.hpp"

nts::Output::Output()
{
    type = "Output";
    pinMap = new PinMap;
    pinMap->addOutputPin(1);
}

void nts::Output::dump() const {

}

nts::PinMap *nts::Output::getPinMap()
{
    return pinMap;
}