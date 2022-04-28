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

#ifndef EmpresaDeMudanza_H
#define EmpresaDeMudanza_H
#include "Camion.h"
#include <iostream>
#include <vector>
using namespace std;

/**
    CLASE:      EmpresaDeMudanza
    INTENCION:  Gestionar la flota de camiones y el peso en ellos para hacer una mudanza.
    RELACIONES: Contiene Camiones.
*/

class EmpresaDeMudanza
{
private:
    vector <Camion> camiones;
    string nombre;
    string nit;

public:
    EmpresaDeMudanza(string _nombre,string _nit);
    ~EmpresaDeMudanza();
    void comprarCamion(string placa,int peso);
    void pesoCamiones(); // Comprobar el peso de cada camion
    int cargarLosCamiones(vector<int> objetos);
};
#endif