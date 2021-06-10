/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** 4069
*/

#include "4069.hpp"

nts::C4069::C4069()
{
	type = "4069";
	pinMap = new PinMap;
	pinMap->addInputPin(1);
	pinMap->addInputPin(3);
	pinMap->addInputPin(5);
	pinMap->addInputPin(9);
	pinMap->addInputPin(11);
	pinMap->addInputPin(13);
	pinMap->addOutputPin(2);
	pinMap->addOutputPin(4);
	pinMap->addOutputPin(6);
	pinMap->addOutputPin(8);
	pinMap->addOutputPin(10);
	pinMap->addOutputPin(12);
}

void nts::C4069::compute()
{
    pinMap->getPin(2)->setActualValue(
		nts::logic::_not(pinMap->getPin(1)->getBackValue())
	);

    pinMap->getPin(4)->setActualValue(
		nts::logic::_not(pinMap->getPin(3)->getBackValue())
	);

    pinMap->getPin(6)->setActualValue(
		nts::logic::_not(pinMap->getPin(5)->getBackValue())
	);

    pinMap->getPin(8)->setActualValue(
		nts::logic::_not(pinMap->getPin(9)->getBackValue())
	);

    pinMap->getPin(10)->setActualValue(
		nts::logic::_not(pinMap->getPin(11)->getBackValue())
	);

    pinMap->getPin(12)->setActualValue(
		nts::logic::_not(pinMap->getPin(13)->getBackValue())
	);
}

void nts::C4069::dump() const
{

}

nts::PinMap *nts::C4069::getPinMap()
{
	return pinMap;
}