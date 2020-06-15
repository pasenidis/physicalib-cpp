#include "formulas.hpp"

#include <cmath>

#include "constants.hpp"

double LibPhysica::Formulas::Sphere::area(double radian) {
    return 4 * LibPhysica::PI * std::pow(radian, 2);
}

double LibPhysica::Formulas::Sphere::volume(double radian) {
    return (4 / 3) * (LibPhysica::PI * std::pow(radian, 3));
}

double LibPhysica::Formulas::edlen(double air_pressure, double temperature, double wavelength, double atmospheric_pressure) {
    return 1 + ((8342.54 + 2406147 / (130 - std::pow(wavelength, 2)) + 15998 / (38.9 - std::pow(wavelength, 2))) *
                    (air_pressure / 96095.43) * ((1 + 1e-8 * (0.601 - 0.00972 * temperature) * air_pressure) / (1 + 0.0036610 * temperature)) -
                atmospheric_pressure * (0.037345 - 0.000401 * std::pow(wavelength, 2))) *
                   1e-8;
}
