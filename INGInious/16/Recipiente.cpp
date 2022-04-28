/*
    Archivo: Clase.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-24
    Fecha última modificación: 2022-01-24
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Recipiente.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo recipiente.
Prototipo: Recipiente nombre_Objeto
Ejemplos: 
Recipiente agua

*/

Recipiente::Recipiente()
{

}

Recipiente::~Recipiente()
{

}

/*

Propósito: Imprimir en consola la temperatura cada vez que aumente 10.
Prototipo: nombre_Objeto.incrementoReferencia(float &numero)
Contrato:  (&numero) -> string's
Ejemplos: 
Recipiente.incrementoReferencia(32)

*/

void Recipiente::incrementoReferencia(float &temperatura){
    
    for (int i = 0; i < 18; i++)
    {
        temperatura += 10;
        cout << "Temperatura argumento (referencia): " << temperatura << endl;
    }
}

/*

Propósito: Imprimir en consola la temperatura cada vez que aumente 10.
Prototipo: nombre_Objeto.incrementoPuntero(float *numero)
Contrato:  (*numero) -> string's
Ejemplos: 
Recipiente.incrementoPuntero(32)

*/

void Recipiente::incrementoPuntero(float *temperatura){
    
    for (int i = 0; i < 18; i++)
    {
        *temperatura += 10;
        cout << "Temperatura argumento (puntero): " << *temperatura << endl;
    }
}









