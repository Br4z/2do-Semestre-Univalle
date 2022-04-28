/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-15
    Fecha última modificación: 2022-01-15
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: Generar un arreglo de tamaño 10 con números reales leídos desde teclado. Calcule el promedio 
    e indique cuántos elementos del arreglo son mayores que el promedio y cuántos menores o iguales.
*/

#include <iostream>
#include "Lista.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Lista numeros;

    numeros.ingresarDiezNumerosEnLaLista();
    numeros.calcularPromedioDeLaLista();
    numeros.numerosMayoresAlPromedio();
    numeros.numerosMenoresAlPromedio();

    return 0;
}
