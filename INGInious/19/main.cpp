/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA:  Programa para almacenar un promedio de n número de estudiantes 
    y mostrarlo donde n es el número de estudiantes ingresados por el usuario.
*/

#include <iostream>
#include "Instituto.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {

    int cantidadDeEstudiantes;
    Instituto *miInstituto = new Instituto();
    // cout << "Total de estudiantes: ";
    cin >> cantidadDeEstudiantes;

    miInstituto->ingresarEstudiantes(cantidadDeEstudiantes);
    miInstituto->getPromedios();
    
    delete miInstituto;
    miInstituto = nullptr;

    return 0;
}