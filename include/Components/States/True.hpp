/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** True
*/

#ifndef TRUE_HPP_
#define TRUE_HPP_

#include "Logic.hpp"
#include "Output.hpp"

namespace nts {
    class True : public IComponent {
    public:
        True();
        ~True() = default;

        void simulate(std::size_t tick) override {}
        void compute() override {}
        void setLink(int pos, Pin pin) override {}
        void dump() const override;
        PinMap *getPinMap() override;

    private:
        PinMap *pinMap;
    };
}

#endif /* !TRUE_HPP_ */