/*
** EPITECH PROJECT, 2020
** my
** File description:
** test
*/

#include "Utils.hpp"
#include "InputException.hpp"
#include "Circuit.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        utils::usage();
        return (84);
    }
    try {
        nts::Circuit circuit(av);
        circuit.loop();
    } catch (MainException exception) {
        std::cout << "An error ocurred: " << exception.what() << std::endl;
        return (84);
    }
}