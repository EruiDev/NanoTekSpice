/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** OutputPin
*/

#ifndef OUTPUTPIN_HPP_
#define OUTPUTPIN_HPP_

#include "Pin.hpp"

namespace nts {
    class OutputPin : public nts::Pin {
    public:
        OutputPin(int pin);
        ~OutputPin() = default;

    private:
    };
}

#endif /* !OUTPUTPIN_HPP_ */
