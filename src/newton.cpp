#include "newton.hpp"

#include "constants.hpp"
#include "math.hpp"


double
LibPhysica::femt(double mass, std::string planet) {
    switch (LibPhysica::Object) {
        case LibPhysica::Object::Earth:
            return mass * 9.81;
            break;
        case LibPhysica::Object::Mars:
            return mass * 3.71;
            break;
        case LibPhysica::Object::Moon:
            return mass * 1.62;
            break;
    }
}

double LibPhysica::third(double force) {
    return force * -1;
}

double LibPhysica::gravity(double mass_a, double mass_b, double distance) {
    return ((LibPhysica::BIG_G * mass_a * mass_b) / LibPhysica::pow(distance, 2));
}