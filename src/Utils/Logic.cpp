/*
** EPITECH PROJECT, 2021
** B-OOP-400-BAR-4-1-tekspice-mathieu.bertrandy
** File description:
** Logic
*/

#include "Logic.hpp"

nts::Tristate nts::logic::_not(nts::Tristate f)
{
    if (f == TRUE)
        return FALSE;
    else if (f == FALSE)
        return TRUE;
    return UNDEFINED;
}

nts::Tristate nts::logic::_and(Tristate f, Tristate s)
{
    if (f == TRUE && s == TRUE)
        return TRUE;
    else if (f == FALSE || s == FALSE)
        return FALSE;
    return UNDEFINED;
}

nts::Tristate nts::logic::_or(Tristate f, Tristate s)
{
    if (f == TRUE || s == TRUE)
        return TRUE;
    else if (f == UNDEFINED || s == UNDEFINED)
        return UNDEFINED;
    return FALSE;
}

nts::Tristate nts::logic::_xor(Tristate f, Tristate s)
{
    if (f == UNDEFINED || s == UNDEFINED)
        return UNDEFINED;
    else if (f != s)
        return TRUE;
    return FALSE;
}

nts::Tristate nts::logic::_nor(Tristate f, Tristate s)
{
    return _not(_or(f, s));
}

nts::Tristate nts::logic::_nand(Tristate f, Tristate s)
{
    return _not(_and(f, s));
}