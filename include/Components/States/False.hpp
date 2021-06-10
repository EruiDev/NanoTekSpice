/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** False
*/

#ifndef FALSE_HPP_
#define FALSE_HPP_

#include "Logic.hpp"
#include "Output.hpp"

namespace nts {
    class False : public IComponent {
    public:
        False();
        ~False() = default;

        void simulate(std::size_t tick) override {}
        void compute() override {}
        void setLink(int pos, Pin pin) override {}
        void dump() const override;
        PinMap *getPinMap() override;

    private:
        PinMap *pinMap;
    };
}

#endif /* !FALSE_HPP_ */