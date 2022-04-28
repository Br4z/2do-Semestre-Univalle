/*
    Archivo: Camion.cpp
    Autores: 
    Getial Getial Juan Sebastian
    <getial.juan@correounivalle.edu.co>
    Calderon Prieto Brandon
    <bcalderonprieto@gmail.com>
    Huertas Cadavid Nicolas Fernando
    <nicolas.huertas@correounivalle.edu.co>
    Cordoba Collazos Angie Natalia
    <natalia8cordoba1908@gmail.com>
    Fecha Creación: 2022-01-28
    Fecha Ultima Modificación: 2022-01-28
    Licencia: GNU-GPL
*/

#include "Camion.h"
#include <iostream>
using namespace std;


Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
    placaCamion = laPlaca;
    capacidadMaxima = laCapacidadMaxima;
    pesoTotalCargado = 0;
}

bool Camion::cargarUnObjeto(int pesoDelObjeto)
{
    if(pesoTotalCargado + pesoDelObjeto <= capacidadMaxima)
    {
        pesoTotalCargado += pesoDelObjeto;
        return true;
    }
    else
        return false;
}

int Camion::hacerMudanza()
{
    return pesoTotalCargado;
}

string Camion::cualEsLaPlaca()
{
    return placaCamion;
}

