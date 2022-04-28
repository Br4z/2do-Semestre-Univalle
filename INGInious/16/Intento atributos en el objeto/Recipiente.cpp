/*
    Archivo: Clase.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-24
    Fecha última modificación: 2022-01-24
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <string> 
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

Propósito: Establecer la temperatura referencia del objeto.
Prototipo: nombre_Objeto.setTemperaturaReferencia(float &numero)
Contrato:  (&numero) -> 
Ejemplos: 
Recipiente.setTemperaturaReferencia(32)

*/

void Recipiente::setTemperaturaReferencia(float &temperaturaReferencia)
{
    this -> temperaturaReferencia = temperaturaReferencia;
}

/*

Propósito: Establecer la temperatura puntero del objeto.
Prototipo: nombre_Objeto.setTemperaturaPuntero(float &numero)
Contrato:  (*numero) -> 
Ejemplos: 
Recipiente.setTemperaturaPuntero(32)

*/

void Recipiente::setTemperaturaPuntero(float *temperaturaPuntero)
{
    this -> temperaturaPuntero = *temperaturaPuntero;
}

/*

Propósito: Imprimir en consola la temperatura cada vez que aumente 10.
Prototipo: nombre_Objeto.temperaturaFahrenheitReferencia()
Contrato:  () -> 
Ejemplos: 
Recipiente.temperaturaFahrenheitReferencia()

*/

void Recipiente::incrementoReferencia(){
    
    for (int i = 0; i < 18; i++)
    {
        temperaturaReferencia += 10;
        cout << "Temperatura argumento (referencia): " << temperaturaReferencia << endl;
    }
}

/*

Propósito: Imprimir en consola la temperatura cada vez que aumente 10.
Prototipo: nombre_Objeto.incrementoPuntero()
Contrato:  () -> 
Ejemplos: 
Recipiente.incrementoPuntero()

*/

void Recipiente::incrementoPuntero()
{
    for (int i = 0; i < 18; i++)
    {
        temperaturaPuntero += 10;
        cout << "Temperatura argumento (referencia): " << temperaturaPuntero << endl;
    }
}









