/*
    Archivo: Cuenta.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Cuenta.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Cuenta.
Prototipo: Cuenta nombre_Objeto
Ejemplos: 
Cuenta miCuenta

*/

Cuenta::Cuenta()
{

}

Cuenta::~Cuenta()
{

}

/*

Propósito: Establecer el numero de personas para hacer la cuenta.
Prototipo: nombre_Objeto.setNumeroPersonas(int numero)
Contrato:  (numero) -> 
Ejemplos: 
miCuenta.setNumeroPersonas(2)

*/

void Cuenta::setNumeroPersonas(int numeroPersonas)
{
    this -> numeroPersonas = numeroPersonas;
}

/*

Propósito: Establecer el numero de meses para hacer la cuenta.
Prototipo: nombre_Objeto.setnumeroMeses(int numero)
Contrato:  (numero) -> 
Ejemplos: 
miCuenta.setnumeroMeses(1)

*/

void Cuenta::setNumeroMeses(int numeroMeses)
{
    this -> numeroMeses = numeroMeses;
}

/*

Propósito: Hacer la cuenta con el numero de meses y personas dado.
Prototipo: nombre_Objeto.getTotalPagado()
Contrato:  () -> float
Ejemplos: 
miCuenta.getTotalPagado()

*/

float Cuenta::getTotalPagado(){
    float aux;
    
    for(int i = 0; i < numeroPersonas; i++)
    {
        for(int j = 0; j < numeroMeses; j++)
            // cout << "El salario del mes " << j + 1 << ": ";
            cin >> aux;
            totalPagado += aux;
    }
    return totalPagado;
}









