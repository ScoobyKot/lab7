
#include "Circle.h"
#include "Sphere.h"

double Sphere::pole() {
    return Circle::pole() * this->r * (4.0 / 3.0);
}
