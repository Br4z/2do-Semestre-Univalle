/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-08
    Fecha última modificación: 2022-02-08
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA:  Suponemos que varias personas reciben un salario durante un 
    cierto número de meses (variable) y queremos saber el total de lo pagado.
*/

#include <iostream>
#include "Cuenta.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {
    Cuenta *miCuenta = new Cuenta;
    int numeroPersonas, numeroMeses;
    //cout << "Cuántas personas son: ";
    cin >> numeroPersonas;
    //cout << "Cuántos meses de salario son: ";
    cin >> numeroMeses;

    miCuenta->setNumeroPersonas(numeroPersonas);
    miCuenta->setNumeroMeses(numeroMeses);
    cout << miCuenta->getTotalPagado();
    cout << endl;

    delete miCuenta;
    miCuenta = nullptr;

    return 0;
}