#include <iostream>
#include "Circle.h"
#include "Circle.cpp"
#include "Sphere.cpp"
#include "Sphere.h"

int main() {
    // 
    auto cir_t_ptr = new Circle();
    cir_t_ptr->r = 4;
    std::cout << cir_t_ptr->pole() << std::endl;
    auto sph_t_ptr = new Sphere();
    sph_t_ptr->r = 4;
    std::cout << sph_t_ptr->pole() << std::endl;
    return 0;
}