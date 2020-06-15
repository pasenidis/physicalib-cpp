#include "newton.hpp"

#include "constants.hpp"
#include <cmath>

enum class LibPhysica::Newton::SpaceBody {
    Earth,
    Mars,
    Moon
};

double LibPhysica::Newton::femt(double mass, LibPhysica::Newton::SpaceBody body) {
    switch (body) {
        case LibPhysica::Newton::SpaceBody::Earth:
            return mass * 9.81;
            break;
        case LibPhysica::Newton::SpaceBody::Mars:
            return mass * 3.71;
            break;
        case LibPhysica::Newton::SpaceBody::Moon:
            return mass * 1.62;
            break;
    }
    return 0;
}

double LibPhysica::Newton::third(double force) {
    return force * -1;
}

double LibPhysica::Newton::gravity(double mass_a, double mass_b, double distance) {
    return ((LibPhysica::BIG_G * mass_a * mass_b) / std::pow(distance, 2));
}