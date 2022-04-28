/*
    Archivo: Clase.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-26
    Fecha última modificación: 2022-01-26
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Laboratorio.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo laboratorio.
Prototipo: Laboratorio nombre_Objeto
Ejemplos: 
Laboratorio uno

*/

Laboratorio::Laboratorio()
{

}

Laboratorio::~Laboratorio()
{

}

/*

Propósito: Presentar e imprimir en consola la temperatura cada vez que aumente 10 (recurriendo a otro objeto).
Prototipo: nombre_Objeto.temperaturaFahrenheitReferencia(float &numero)
Contrato:  (&numero) -> string
Ejemplos: 
Laboratorio.temperaturaFahrenheitReferencia(32) // Recordemos que recibe una referencia

*/

void Laboratorio::temperaturaFahrenheitReferencia(float &temperatura)
{
    cout << "----- Parámetros por referencia -----" << endl;
    cout << "Temperatura argumento (Fahrenheit) antes: " << temperatura << endl;
    agua.setTemperaturaReferencia(temperatura);

    agua.incrementoReferencia();

    cout << "Temperatura argumento (Fahrenheit) después: " << temperatura << endl;
}

/*

Propósito: Presentar e imprimir en consola la temperatura cada vez que aumente 10 (recurriendo a otro objeto).
Prototipo: nombre_Objeto.temperaturaFahrenheitPuntero(float *numero)
Contrato:  (*numero) -> string's
Ejemplos: 
Laboratorio.temperaturaFahrenheitPuntero(32) // Recordemos que recibe una dirección de memoria

*/

void Laboratorio::temperaturaFahrenheitPuntero(float *temperatura)
{
    cout << "----- Parámetros por puntero -----" << endl;
    cout << "Temperatura argumento (Fahrenheit) antes: " << *temperatura << endl;
    agua.setTemperaturaPuntero(temperatura);
    agua.incrementoPuntero();
    cout << "Temperatura argumento (Fahrenheit) después: " << *temperatura << endl;
}









