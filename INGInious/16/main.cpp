/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-23
    Fecha última modificación: 2022-01-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA:  Implementar una solución en C++ que permita cumplir los siguientes requisitos:
    1. Existe un método denominado temperaturaFahrenheitReferencia() que recibe como argumento por referencia la temperatura 
    inicial en grados Fahrenheit e imprime en consola los cambios cada vez que aumenta 10 grados la temperatura.
    2. Existe un método denominado temperaturaFahrenheitPuntero() que recibe como argumento un puntero con la 
    temperatura inicial en grados Fahrenheit e imprime en consola los cambios cada vez que aumenta 10 grados la temperatura.
*/

#include <iostream>
#include "Laboratorio.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Laboratorio uno;
    float temperatura = 32, aux, *punteroAux = &aux;

    aux = temperatura;

    uno.temperaturaFahrenheitReferencia(temperatura);
    uno.temperaturaFahrenheitPuntero(punteroAux);

    return 0;
}