/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-14
    Fecha última modificación: 2022-01-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: Dada una calificación para el empleado, muestre la calificación en palabras de esta manera:

    Si es a, la calificación es aceptable
    Si es b; la calificación es buena
    Si es e, la calificación es excelente.
    si es otra letra(s): no se clasifico.
*/

#include <iostream>
#include "Empleado.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Empleado uno;

    uno.ingresarCalificacion();
    uno.evaluarCalificacion();

    return 0;
}