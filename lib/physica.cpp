/*
   Library driver file
   (physica.cpp)
*/
#include <stdio.h>

#include <iostream>
#include <string>

#include "io.hpp"
#include "newton.hpp"
#include "pressure.hpp"

int main(void) {

    double outputs[] = {LibPhysica::Newton::third(1)};

    double answers[] = {-1};

    for (long unsigned int i = 0; i < sizeof(outputs); i++) {
        std::cout << "Testing... " << i << std::endl;
        if (outputs[i] == answers[i]) {
            std::cout << "Test passed ✔️  -> " << i << std::endl;
        } else {
            std::cout << "Test failed. ☒ -> " << i << std::endl;
        }
    }
    return 0;
}
