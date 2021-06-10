/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Pin
*/

#ifndef PIN_HPP_
#define PIN_HPP_

#include <iostream>
#include <vector>
#include "Tristate.hpp"

namespace nts {
    class Pin {
    public:
        Pin(int pin, std::string type);
        Pin() = default;
        ~Pin() = default;

        void setBackValue(Tristate backValue);
        void setActualValue(Tristate actualValue);
        Tristate getBackValue() const;
        Tristate getActualValue() const;
        int getId() const;
        void setType(const std::string &type);
        const std::string &getType() const;

    private:
        nts::Tristate backValue;
        nts::Tristate actualValue;
        int Id;
        std::string type;
    };
}

#endif /* !PIN_HPP_ */