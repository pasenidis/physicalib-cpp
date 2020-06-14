#include "io.hpp"

#include <iostream>
#include <string>

void LibPhysica::print(std::string text) {
    std::cout << text << std::endl;
}

std::string LibPhysica::input(std::string hint) {
    LibPhysica::print(hint);

    std::string libinput;
    std::cin >> libinput;
}