#include "../include/cuadrado.hpp"

#include <iostream>

using namespace std;

Cuadrado::Cuadrado(double lado)
    {
        c_lado = lado;
    }

double Cuadrado::obtenerPerimetro()
    {
        return 4 * c_lado;
    };

double Cuadrado::obtenerArea()
    {
        return c_lado * c_lado;
    };