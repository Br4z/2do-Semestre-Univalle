/*
    Archivo: Numero.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-15
    Fecha última modificación: 2022-01-15
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <vector>
#include "Lista.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo lista.
Prototipo: Lista nombre_Objeto
Ejemplos: 
Lista números

*/

Lista::Lista()
{

}

Lista::~Lista()
{

}

/*

Propósito: Pedir y ingresar 10 números.
Prototipo: nombre_Objeto.ingresarDiezNumerosEnLaLista()
Contrato:  () -> 
Ejemplos: 
miNumero.ingresarDiezNumerosEnLaLista()

*/

void Lista::ingresarDiezNumerosEnLaLista()
{
    float numero;
    for(int i = 0; i < 10; i ++)
    {
        // cout << "Ingrese el numero que quiere introducir en la lista: ";
        cin >> numero;
        numeros.push_back(numero);
    }
}

/*

Propósito: Sacar el promedio de una lista de 10 elementos.
Prototipo: nombre_Objeto.calcularPromedioDeLaLista()
Contrato:  () -> float
Ejemplos: 
miNumero.calcularPromedioDeLaLista()

*/

void Lista::calcularPromedioDeLaLista()
{
    float suma = 0;
    vector <float>  paraMostrar = numeros;
    for (int i = 0; i < 10 ; i++)
    {
        suma +=  paraMostrar.back();
        paraMostrar.pop_back();
    }
    promedio = suma / 10;
    cout << promedio << endl;
}

/*

Propósito: Contar cuantos números mayores al promedio hay en el vector.
Prototipo: nombre_Objeto.numerosMayoresAlPromedio()
Contrato:  () -> int
Ejemplos: 
miNumero.numerosMayoresAlPromedio()

*/

void Lista::numerosMayoresAlPromedio()
{
    mayoresAlPromedio = 0;
    vector <float>  paraMostrar = numeros;
    for (int i = 0; i < 10 ; i++)
    {
        if (paraMostrar.back() > promedio) 
        {
            mayoresAlPromedio++;
        }
        paraMostrar.pop_back();
    }
    cout << mayoresAlPromedio << endl;
}

/*

Propósito: Contar cuantos numeros menores o iguales al promedio hay en el vector.
Prototipo: nombre_Objeto.numerosMenoresAlPromedio()
Contrato:  () -> int
Ejemplos: 
miNumero.numerosMenoresAlPromedio()

*/

void Lista::numerosMenoresAlPromedio()
{
    menoresAlPromedio = 0;
    vector <float>  paraMostrar = numeros;
    for (int i = 0; i < 10 ; i++)
    {
        if (paraMostrar.back() <= promedio) 
        {
            menoresAlPromedio++;
        }
        paraMostrar.pop_back();
    }
    cout << menoresAlPromedio << endl;
}








