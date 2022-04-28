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

/**
    HISTORIA: La empresa de mudanza Camiones Mountain quiere gestionar su logística de mudanzas. 
*/

#include "EmpresaDeMudanza.h"
#include "Camion.h"
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector <int> objetos =
    {
        1000, 3000, 5000, 2000, 500, 1800, 4000, 30
    };

    EmpresaDeMudanza nuevaEmpresa("Camiones Mountain", "2498024-9");

    nuevaEmpresa.comprarCamion("YUI-988", 10000);
    nuevaEmpresa.comprarCamion("OIJ-807", 5000);
    nuevaEmpresa.comprarCamion("KHO-193", 5000);

    cout << nuevaEmpresa.cargarLosCamiones(objetos) << endl;

    /*
    nuevaEmpresa.pesoCamiones(); 
    */

    return 0;
}