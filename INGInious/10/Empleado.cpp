/*
    Archivo: Empleado.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-15
    Fecha última modificación: 2022-01-15
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <string>
#include "Empleado.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Empleado.
Prototipo: Empleado nombre_Objeto
Ejemplos: 
Empleado uno

*/

Empleado::Empleado()
{

}

Empleado::~Empleado()
{

}

/*

Propósito: Ingresar la calificación del empleado.
Prototipo: nombre_Objeto.ingresarCalificacion()
Contrato:  () -> 
Ejemplos: 
miEmpleado.ingresarCalificacion()

*/

void Empleado::ingresarCalificacion(){
    // cout << "Ingrese la calificación: "
    cin >> calificacion;
}

/*

Propósito: evaluar la calificación del empleado.
Prototipo: nombre_Objeto.evaluarCalificacion()
Contrato:  () -> string
Ejemplos: 
miEmpleado.evaluarCalificacion()

*/

void Empleado::evaluarCalificacion(){
    if (calificacion == "a")
    {
        cout << "aceptable" << endl;
    }
    else if (calificacion == "b")
    {
        cout << "buena" << endl;
    }
    else if (calificacion == "e")
    {
        cout << "excelente" << endl;
    }
    else {
        cout << "no se clasifico" << endl;
    }
}






