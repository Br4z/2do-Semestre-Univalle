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

#include <iostream>
using namespace std;

#ifndef Camion_H
#define Camion_H

/**
    CLASE:      Camion
    INTENCION:  Representar un camion de carga.
    RELACIONES: NINGUNA
*/

class Camion
{
private:
    string placaCamion;
    int capacidadMaxima;
    int pesoTotalCargado;

public:
    Camion(string laPlaca, int laCapacidadMaxima); // Constructor. Variables iniciales a atributos internos
    bool cargarUnObjeto(int pesoDelObjeto); // Evalua si puede cargar un objeto o no. Retorna 0 = false (No se puede hacer) y 1 = true (Se puede hacer)
    int hacerMudanza(); // Hacer la mudanza. Retorna la carga que transporto
    string cualEsLaPlaca(); // Saber cual es la placa del camion.
};

#endif