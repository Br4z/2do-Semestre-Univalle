/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: Genere una pila de tamaño 10 con números pares de 2 a 20. sumelos y luego 
    haga que la pila quede vaciá y finalmente muestre el tamaño de la pila.
*/

#include <iostream>
#include "Pila.h"
using namespace std;



int main() {
    Pila numeros;

    for(int i = 2; i <= 20; i += 2)
    {
        numeros.apilar(i);
    }
    numeros.sumarElementos();
    numeros.vaciar();
    numeros.size();

    return 0;
}
