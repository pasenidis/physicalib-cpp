#pragma once
#include <string>

namespace LibPhysica {
    namespace Newton {
        enum class SpaceBody;
        double
        femt(double mass, LibPhysica::Newton::SpaceBody body);
        double third(double force);
        double gravity(double mass_a, double mass_b, double distance);
    }  // namespace Newton
}  // namespace LibPhysica