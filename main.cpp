#include "include/circulo.hpp"
#include "include/cuadrado.hpp"

#include <iostream>

using namespace std;

int main() 
    {
        // Crear una instancia de Circulo con radio 5
        Circulo circulo(5.5);
        cout << "Circulo:" << endl;
        cout << "Perimetro: " << circulo.obtenerPerimetro() << endl;
        cout << "Area: " << circulo.obtenerArea() << endl;

        // Crear una instancia de Cuadrado con lado 4
        Cuadrado cuadrado(4.0);
        cout << endl << "Cuadrado:" << endl;
        cout << "Perimetro: " << cuadrado.obtenerPerimetro() << endl;
        cout << "Area: " << cuadrado.obtenerArea() << endl;

        return 0;
    }