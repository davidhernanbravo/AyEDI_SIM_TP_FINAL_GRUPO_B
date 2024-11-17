#include "../include/circulo.hpp"

#include <iostream>

using namespace std;

Circulo::Circulo(double radio)
    {
        c_radio = radio;
    }

double Circulo::obtenerPerimetro()
    {
        return 2 * 3.14 * c_radio;
    };

double Circulo::obtenerArea()
    {
        return 3.14 * (c_radio * c_radio);
    };