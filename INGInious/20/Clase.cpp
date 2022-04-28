/*
    Archivo: Clase.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream> 
#include <algorithm>
#include <functional>
#include "Clase.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo clase.
Prototipo: Clase nombre_Objeto
Ejemplos: 
Clase miArray

*/

Clase::Clase()
{

}

Clase::~Clase(){

}

/*

Propósito: Establecer el array de tipo dinamico en el objeto.
Prototipo: nombre_Objeto.setArray(int numero)
Contrato:  (numero) -> 
Ejemplos: 
miNumero.setArray(2)

*/

void Clase::setArray(int numeroElementos)
{
    array = new float[numeroElementos];
    float valor;

    for(int i = 0; i < numeroElementos; i++)
    {   
        // cout << "Ingrese el valor No. " << i << ": ";
        cin >> valor;
        array[i] = valor;
        size += 1; 
    }
}

/*

Propósito: Ordenar el array dentro del objeto según el modo que se especifique y mostrarlo en pantalla.
Prototipo: nombre_Objeto.getArrayOrdenado(string modo)
Contrato:  (modo) -> 
Ejemplos: 
miNumero.setArray("Mayor a menor")

*/

void Clase::getArrayOrdenado(string modo){

    if(modo == "Menor a mayor")
    {
        sort(array, array + size); // (begin(datos), end(datos))
    } 
    else if (modo == "Mayor a menor")
    {
        sort(array, array + size, greater<float>());
    }

    for(int i = 0; i < size; i++)
    {   
        
        cout << " " << array[i] ;
    }
}