#include "newton.hpp"

#include "constants.hpp"
#include "math.hpp"


double
LibPhysica::Newton::femt(double mass, std::string planet) {
    switch (LibPhysica::Newton::Object) {
        case LibPhysica::Newton::Object::Earth:
            return mass * 9.81;
            break;
        case LibPhysica::Newton::Object::Mars:
            return mass * 3.71;
            break;
        case LibPhysica::Newton::Object::Moon:
            return mass * 1.62;
            break;
    }
}

double LibPhysica::Newton::third(double force) {
    return force * -1;
}

double LibPhysica::Newton::gravity(double mass_a, double mass_b, double distance) {
    return ((LibPhysica::BIG_G * mass_a * mass_b) / std::pow(distance, 2));
}