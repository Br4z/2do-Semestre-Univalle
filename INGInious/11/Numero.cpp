/*
    Archivo: Numero.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-14
    Fecha última modificación: 2022-01-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Numero.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Numero.
Prototipo: Numero nombre_Objeto
Ejemplos: 
Numero uno

*/

Numero::Numero()
{

}

Numero::~Numero()
{

}

/*

Propósito: Almacenar un numero dado por el usuario.
Prototipo: nombre_Objeto.ingresarNumero()
Contrato:  () -> 
Ejemplos: 
miNumero.ingresarNumero()

*/

void Numero::ingresarNumero()
{
    // cout << "Ingrese el numero: ";
    cin >> numero;
}

/*

Propósito: Analizar el numero dentro del objeto (para hallar la frecuencia de sus dígitos).
Prototipo: nombre_Objeto.analizar()
Contrato:  () -> string's
Ejemplos: 
miNumero.analizar()

*/

void Numero::analizar(){
    int numeroAux;
    for(int i = 0; i <= 9; i ++)
    {      
        numeroAux = numero;
        int aux, aux2 = 0;
        cout << i << " = ";
        while(numeroAux > 0)
        {
            aux = numeroAux % 10;
            numeroAux = numeroAux / 10;
            if (aux == i)
            {
                aux2++;
            }
        }
        cout << aux2;
        cout << endl;
    }   
}








