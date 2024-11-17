#ifndef FORMA_HPP
#define FORMA_HPP
#include <iostream>

#include <string>

using namespace std;

class Forma
    {
        public:
            virtual double obtenerPerimetro() = 0;
            virtual double obtenerArea() = 0;
    };

#endif