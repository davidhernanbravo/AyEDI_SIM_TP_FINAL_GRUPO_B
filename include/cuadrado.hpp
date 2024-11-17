#ifndef CUADRADO_HPP
#define CUADRADO_HPP

#include "forma.hpp"

#include <iostream>

using namespace std;

class Cuadrado : public Forma
{
    private:
        double c_lado;

    public:
        Cuadrado(double lado);
        double obtenerPerimetro();
        double obtenerArea();
};

#endif