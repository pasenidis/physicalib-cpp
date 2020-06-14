#import "pressure.hpp"

double LibPhysica::solid(double vertical_force, double surface_area) {
    return vertical_force / surface_area;
}