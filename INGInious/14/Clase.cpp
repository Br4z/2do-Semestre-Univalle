/*
    Archivo: Clase.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-23
    Fecha última modificación: 2022-01-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream> 
#include "Clase.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo clase.
Prototipo: Clase nombre_Objeto
Ejemplos: 
Clase numeros

*/

Clase::Clase()
{

}

Clase::~Clase()
{

}

/*

Propósito: Sacar el inverso de un numero dado.
Prototipo: nombre_Objeto.getNumeroInvertido(float &numero)
Contrato:  (&numero) -> 
Ejemplos: 
miNumero.getNumeroInvertido(3) // Recordar que recibe la dirección de memoria del dato introducido

*/

void Clase::setNumeroInvertido(float &numero){
    
    if(numero != 0)
    {
        numero = 1 / numero;
    }
}









