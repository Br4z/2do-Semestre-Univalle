/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: Pedirle al usuario el tamaño con que quiere que se cree el vector del objeto MiVector.
*/

#include <iostream>
#include "Vector.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    int numero; MiVector vector;
    cin >> numero;
    vector.construirVector(numero);

    return 0;
}
