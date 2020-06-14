#pragma once
#include <string>

namespace LibPhysica {
    double femt(double mass, std::string planet);
    double third(double force);
    double gravity(double mass_a, double mass_b, double distance);
}  // namespace LibPhysica