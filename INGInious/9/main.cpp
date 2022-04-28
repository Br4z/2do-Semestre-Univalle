/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: Modelar un lavadero de autos utilizando la libreria queue (para la creación de colas).
*/

#include <iostream>
#include "Cola.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Cola carros;

    carros.encolar("ABC-123");
    carros.encolar("CGE-435");
    carros.encolar("WER-223");
    carros.encolar("AAA-785");
    carros.pendientes();
    carros.desencolar();
    carros.proximo();
    carros.pendientes();

    return 0;
}
