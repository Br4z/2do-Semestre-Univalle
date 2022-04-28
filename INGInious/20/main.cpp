/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA: Programa que ordene un Array Dinámico de mayor a menor o de menor 
    a mayor según la opción que elija el usuario.
*/

#include <iostream>
#include "Clase.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Clase *miArray = new Clase();
    int numeroValores;

    // cout << "Cuantos valores desea ingresar: ";
    cin >> numeroValores;

    miArray->setArray(numeroValores);
    miArray->getArrayOrdenado("Mayor a menor");

    delete miArray;
    miArray = nullptr;
    
    return 0;
}