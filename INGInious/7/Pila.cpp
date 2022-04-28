/*
    Archivo: Pila.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <stack>
#include "Pila.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo pila.
Prototipo: Pila nombre_Objeto
Ejemplos: 
Pila miPila

*/

Pila::Pila()
{
// Se crea sin nada
}


Pila::~Pila()
{

}

/*

Propósito: Hallar el tamaño de un pila y mostrarlo en pantalla.
Prototipo: nombre_Objeto.size()
Contrato:  () -> int
Ejemplos: 
miPila.size()

*/

void Pila::size()
{
    // cout << "Tamaño pila: " << elementos.size() << endl;
    cout << elementos.size() << endl; 
}

/*

Propósito: Apilar un numero en la pila.
Prototipo: nombre_Objeto.apilar(int numero)
Contrato:  (numero) -> int
Ejemplos: 
miPila.apilar(5)

*/

void Pila::apilar(int numero)
{

    elementos.push(numero);
    cout << numero << endl;

}

/*

Propósito: Vaciar una pila.
Prototipo: nombre_Objeto.vaciar()
Contrato:  () -> 
Ejemplos: 
miPila.vaciar()

*/

void Pila::vaciar()
{
    while(!elementos.empty()){
    elementos.pop();
    }
}

/*

Propósito: Sumar todos los elementos de una pila.
Prototipo: nombre_Objeto.sumarElementos()
contrato:  () -> int
Ejemplos: 
miPila.sumarElementos()

*/

void Pila::sumarElementos()
{
    stack <int> aux = elementos;
    int suma = 0;
    while(!elementos.empty()){
    suma += elementos.top();
    elementos.pop();
    }
    cout << suma << endl;
}
