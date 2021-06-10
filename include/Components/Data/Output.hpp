/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Output
*/

#ifndef OUTPUT_HPP_
#define OUTPUT_HPP_

#include "Input.hpp"
#include "PinMap.hpp"
#include <Logic.hpp>

namespace nts {
    class Output : public IComponent {
    public:
        Output();
        ~Output() = default;

        void simulate(std::size_t tick) override {}
        void compute() override {}
        void setLink(int pos, Pin pin) override {}
        void dump() const override;
        PinMap *getPinMap() override;

    private:
        PinMap *pinMap;
    };
}

#endif /* !OUTPUT_HPP_ */