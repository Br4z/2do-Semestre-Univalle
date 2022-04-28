/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-23
    Fecha última modificación: 2022-01-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: programa que modifique el valor del parámetro de tipo float para que valga la inversa de su valor cuando este sea 
    distinto de cero. Si el numero es cero, el procedimiento dejara intacto el valor del parametro.
*/

#include <iostream>
#include <iomanip>
#include <cmath> 
#include "Clase.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Clase numeros;
    float numero;

    cin >> numero;

    numeros.setNumeroInvertido(numero);

    cout <<  setprecision(2) << numero << endl;

    return 0;
}