/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Logic
*/

#ifndef LOGIC_HPP_
#define LOGIC_HPP_

#include "Tristate.hpp"

namespace nts {
    namespace logic {
        Tristate _and(Tristate f, Tristate s);
        Tristate _or(Tristate f, Tristate s);
        Tristate _nor(Tristate f, Tristate s);
        Tristate _not(nts::Tristate f);
        Tristate _nand(Tristate f, Tristate s);
        Tristate _xor(Tristate f, Tristate s);
    }
}

#endif /* !LOGIC_HPP_ */
