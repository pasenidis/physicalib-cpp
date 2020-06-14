#include "newton.hpp"

#include "constants.hpp"
#include "math.hpp"

double LibPhysica::femt(double mass, std::string planet) {
    if (planet == "Earth") {
        return mass * 9.81;
    } else if (planet == "Mars") {
        return mass * 3.71;
    } else if (planet == "Moon") {
        return mass * 1.62;
    } else {
        return mass;
    }
}

double LibPhysica::third(double force) {
    return force * -1;
}

double LibPhysica::gravity(double mass_a, double mass_b, double distance)
    [return ((LibPhysica::BIG_G * mass_a * mass_b) / LibPhysica::pow(distance, 2));
]