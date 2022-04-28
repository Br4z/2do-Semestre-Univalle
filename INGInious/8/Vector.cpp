/*
    Archivo: Vector.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <vector>
#include "Vector.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Mivector.
Prototipo: Mivector nombre_Objeto
Ejemplos: 
Mivector vector

*/

MiVector::MiVector()
{

}

MiVector::~MiVector()
{

}

/*

Propósito: Construir un vector con un numero de datos dado.
Prototipo: nombre_Objeto.construirvector(int numero)
Contrato:  (numero) -> int's
Ejemplos: 
vector.construirVector(5)

*/

void MiVector::construirVector(int numeroDatos)
{
    for(int i = 0; i < numeroDatos; i++)
    {
        elementos.push_back(i); // Para rellenar el vector con algo
        cout << i << endl;
    }
}

