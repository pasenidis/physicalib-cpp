#pragma once
#include <string>

namespace LibPhysica {
    namespace Newton {
        enum class Object {
            Earth,
            Mars,
            Moon
        };
        double
        femt(double mass, std::string planet);
        double third(double force);
        double gravity(double mass_a, double mass_b, double distance);
    }  // namespace Newton
}  // namespace LibPhysica