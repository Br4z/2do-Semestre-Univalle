/*
    Archivo: Cola.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <string>
#include <queue>
#include "Cola.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo cola.
Prototipo: Cola nombre_Objeto
Ejemplos: 
Cola miCola

*/

Cola::Cola()
{

}

Cola::~Cola()
{

}

/*

Propósito: Añadir una "placa" a la cola.
Prototipo: nombre_Objeto.encolar(string placa)
Contrato:  (placa) -> string
Ejemplos: 
miCola.encolar("CGV-765")

*/

void Cola::encolar(string placa)
{
    placas.push(placa);
    cout << "El auto ingreso correctamente" << endl;
}

/*

Propósito: Quitar el primer elemento (se empieza a contar desde el ultimo encolado hasta el primero).
Prototipo: nombre_Objeto.desencolar()
Contrato:  () -> string
Ejemplos: 
miCola.desencolar()

*/

void Cola::desencolar()
{
    placas.pop();
    cout << "El auto se entrego a su dueño" << endl;
}

/*

Propósito: Ver cual es el primer elemento de la cola.
Prototipo: nombre_Objeto.proximo()
Contrato:  () -> string
Ejemplos: 
miCola.proximo()

*/

void Cola::proximo()
{
    cout << "Proximo auto a lavar: "<< placas.front() << endl;
}

/*

Propósito: Imprimir los elementos de una cola (en este caso serian los pendientes).
Prototipo: nombre_Objeto.pendientes()
Contrato:  () -> string's
Ejemplos: 
miCola.pendientes()

*/

void Cola::pendientes()
{
    int size = placas.size();
    queue <string>  paraMostrar = placas;
    for (int i = 0; i < size ; i++)
    {
        if (i == size - 1)
        {
            cout << paraMostrar.front() << endl; 
        } else {
            cout << paraMostrar.front() << ", ";  
        }
        paraMostrar.pop();
    } 
}
