/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** 4001
*/

#ifndef C4001_HPP_
#define C4001_HPP_

#include <iostream>
#include "Output.hpp"

namespace nts
{
    class C4001 : public IComponent {
    public:
        C4001();

        void simulate(std::size_t tick) override {}
        void compute() override;
        void setLink(int pos, Pin pin) override {}
        void dump() const override;
        PinMap *getPinMap() override;

    private:
        PinMap *pinMap;
    };
}

#endif /* !C4001_HPP_ */
