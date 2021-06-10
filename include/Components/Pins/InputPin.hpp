/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** InputPin
*/

#ifndef INPUTPIN_HPP_
#define INPUTPIN_HPP_

#include "Pin.hpp"

namespace nts {
    class InputPin : public nts::Pin {
    public:
        InputPin(int pin);
        ~InputPin() = default;

    private:
    };
}

#endif /* !INPUTPIN_HPP_ */
