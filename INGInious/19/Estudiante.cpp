/*
    Archivo: Estudiante.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Estudiante.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Estudiante.
Prototipo: Estudiante nombre_Objeto(float nota)
Ejemplos: 
Estudiante miEstudiante(4.7)

*/

Estudiante::Estudiante(float nota)
{
    this -> nota = nota;
}

Estudiante::~Estudiante()
{

}

/*

Propósito: Obtener el promedio de un estudiante (nota).
Prototipo: nombre_Objeto.getNota()
Contrato:  () -> float
Ejemplos: 
miEstudiante.getNota()

*/

float Estudiante::getNota()
{
    return nota;
}















