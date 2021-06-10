/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** 4081
*/

#include "4081.hpp"

nts::C4081::C4081()
{
    type = "4081";
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

void nts::C4081::compute()
{
    pinMap->getPin(3)->setActualValue(
        nts::logic::_and(
            pinMap->getPin(1)->getBackValue(),
            pinMap->getPin(2)->getBackValue()
        )
    );

    pinMap->getPin(4)->setActualValue(
        nts::logic::_and(
            pinMap->getPin(5)->getBackValue(),
            pinMap->getPin(6)->getBackValue()
        )
    );

    pinMap->getPin(10)->setActualValue(
        nts::logic::_and(
            pinMap->getPin(8)->getBackValue(),
            pinMap->getPin(9)->getBackValue()
        )
    );

    pinMap->getPin(11)->setActualValue(
        nts::logic::_and(
            pinMap->getPin(12)->getBackValue(),
            pinMap->getPin(13)->getBackValue()
        )
    );
}

void nts::C4081::dump() const
{

}

nts::PinMap *nts::C4081::getPinMap()
{
    return pinMap;
}