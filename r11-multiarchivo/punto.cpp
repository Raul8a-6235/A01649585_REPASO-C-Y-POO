#include "punto.h"
#include <iostream>
#include <string>

Punto::Punto(double x, double y) {
    this->x = x;
    this->y = y;
}

void Punto::imprimir() const {
    std::cout << "(" << x << ", " << y << ")\n";
}

double Punto::getX() const{ 
    return x;
 }

double Punto::getY() const { 
    return y; 
}