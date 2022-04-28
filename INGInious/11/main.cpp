/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-14
    Fecha última modificación: 2022-01-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: Para un número entero de hasta 10 dígitos, sacar la frecuencia de cada uno de ellos.
*/

#include <iostream>
#include "Numero.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Numero uno;

    uno.ingresarNumero();
    uno.analizar();

    return 0;       
}