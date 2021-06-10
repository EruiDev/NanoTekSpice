/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** IComponent
*/

#include <iostream>
#include "Pin.hpp"
#include "PinMap.hpp"

namespace nts
{
    class IComponent
    {
    public:
        virtual ~IComponent() = default;

        virtual void simulate(std::size_t tick) = 0;
        virtual void compute() = 0;
        virtual void setLink(int pos, Pin pin) = 0;
        virtual void dump() const = 0;
        const std::string &getType() const {
            return type;
        }
        virtual PinMap* getPinMap() = 0;

    protected:
        std::string type;
    };
}