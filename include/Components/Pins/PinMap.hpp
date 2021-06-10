/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** PinMap
*/

#ifndef PINMAP_HPP_
#define PINMAP_HPP_

#include <map>
#include "InputPin.hpp"
#include "OutputPin.hpp"

namespace nts {
    class PinMap {
    public:
        PinMap() = default;
        ~PinMap() = default;

        void addInputPin(int pin);
        void addOutputPin(int pin);
        Pin* getPin(int pin);
        void setPin(int pos, Pin *pin);
        int getSize() const;

    private:
        std::map<int, Pin*> map;
    };
}

#endif /* !PINMAP_HPP_ */
