/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** 4001
*/

#include "4001.hpp"

nts::C4001::C4001()
{
    type = "4001";
    pinMap = new PinMap;
    pinMap->addInputPin(1);
    pinMap->addInputPin(2);
    pinMap->addInputPin(5);
    pinMap->addInputPin(6);
    pinMap->addInputPin(8);
    pinMap->addInputPin(9);
    pinMap->addInputPin(12);
    pinMap->addInputPin(13);
    pinMap->addOutputPin(3);
    pinMap->addOutputPin(4);
    pinMap->addOutputPin(10);
    pinMap->addOutputPin(11);
}

void nts::C4001::compute()
{
    pinMap->getPin(3)->setActualValue(
        nts::logic::_nor(
            pinMap->getPin(1)->getBackValue(),
            pinMap->getPin(2)->getBackValue()
        )
    );

    pinMap->getPin(4)->setActualValue(
        nts::logic::_nor(
            pinMap->getPin(5)->getBackValue(),
            pinMap->getPin(6)->getBackValue()
        )
    );

    pinMap->getPin(10)->setActualValue(
        nts::logic::_nor(
            pinMap->getPin(8)->getBackValue(),
            pinMap->getPin(9)->getBackValue()
        )
    );

    pinMap->getPin(11)->setActualValue(
        nts::logic::_nor(
            pinMap->getPin(12)->getBackValue(),
            pinMap->getPin(13)->getBackValue()
        )
    );
}

void nts::C4001::dump() const
{

}

nts::PinMap *nts::C4001::getPinMap()
{
    return pinMap;
}