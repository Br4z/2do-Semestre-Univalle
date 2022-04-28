/*
    Archivo: Instituto.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Instituto.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Instituto.
Prototipo: Instituto nombre_Objeto
Ejemplos: 
Instituto miInstituto

*/

Instituto::Instituto()
{

}

Instituto::~Instituto(){

}

/*

Propósito: Ingresar una cierta cantidad de estudiantes al vector que contiene los estudiantes.
Prototipo: nombre_Objeto.ingresarEstudiantes(int numero)
Contrato:  (numero) -> 
Ejemplos: 
miInstituto.ingresarEstudiantes(2)

*/

void Instituto::ingresarEstudiantes(int numeroEstudiantes)
{
    for(int i = 0; i < numeroEstudiantes; i++)
    {
        float nota;
        // cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> nota;
        // Estudiante *miEstudiante = new Estudiante(nota);
        Estudiante miEstudiante(nota);
        estudiantes.push_back(miEstudiante);
        
    }
    // cout << endl;
}

/*

Propósito: Listar los promedios (notas) de los estudiantes que contiene el instituto.
Prototipo: nombre_Objeto.getPromedios()
Contrato:  () -> string's
Ejemplos: 
miInstituto.getPromedios()

*/

void Instituto::getPromedios()
{
    cout << "Notas de los estudiantes:" << endl;
    for(int i = 0; i < estudiantes.size(); i++)
    {
        cout << "Estudiante " << i + 1 << ": " << estudiantes[i].getNota() << endl;
    }
}










