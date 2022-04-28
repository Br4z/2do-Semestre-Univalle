/*
    Archivo: Vagon.cpp
    Autores:
    Getial Getial Juan Sebastian
    <getial.juan@correounivalle.edu.co>
    Calderon Prieto Brandon
    <bcalderonprieto@gmail.com>
    Huertas Cadavid Nicolas Fernando
    <nicolas.huertas@correounivalle.edu.co>
    Fecha Creación: 2022-02-25
    Fecha Ultima Modificación: 2022-02-25
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Vagon.h"
using namespace std;

Vagon::Vagon(int numero, bool infectado)
{
    this->numero = numero;
    this->infectado = infectado;
}

Vagon::~Vagon()
{
}

int Vagon::getNumero()
{
    return numero;
}