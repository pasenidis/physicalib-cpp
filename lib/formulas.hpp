#pragma once
#include <string>

namespace LibPhysica {
    namespace Formulas {
        namespace Sphere {
            double area(double radian);
            double volume(double radian);
        }
        double edlen(double air_pressure, double temperature, double wavelength, double atmospheric_pressure);
    }  // namespace Formulas
}  // namespace LibPhysica