/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Clock
*/

#ifndef CLOCK_HPP_
#define CLOCK_HPP_

#include "Logic.hpp"
#include "Output.hpp"

namespace nts {
    class Clock : public IComponent {
    public:
        Clock();
        ~Clock() = default;

        void simulate(std::size_t tick) override {}
        void compute() override;
        void setLink(int pos, Pin pin) override {}
        void dump() const override;
        PinMap *getPinMap() override;

    private:
        PinMap *pinMap;
    };
}

#endif /* !CLOCK_HPP_ */