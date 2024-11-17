#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "forma.hpp"

#include <iostream>

using namespace std;

class Circulo : public Forma
{
    private:
        double c_radio;
        
    public:
        Circulo(double radio);
        double obtenerPerimetro();
        double obtenerArea();
};

#endif