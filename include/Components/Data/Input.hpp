/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Input
*/

#ifndef INPUT_HPP_
#define INPUT_HPP_

#include "IComponent.hpp"

namespace nts {
    class Input : public IComponent {
    public:
        Input();
        ~Input() = default;

        void simulate(std::size_t tick) override {}
        void compute() override {}
        void setLink(int pos, Pin pin) override {}
        void dump() const override;
        PinMap *getPinMap() override;

    private:
        PinMap *pinMap;
    };
}

#endif /* !INPUT_HPP_ */