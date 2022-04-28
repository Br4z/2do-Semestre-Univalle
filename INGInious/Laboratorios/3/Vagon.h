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

/**
    CLASE:      Vagón.
    INTENCION:  Representa un vagón.
    RELACIONES: NINGUNA
*/

#ifndef VAGON_H
#define VAGON_H
#include <iostream>
using namespace std;

class Vagon
{
private:
    int numero;
    bool infectado;

public:
    Vagon(int numero, bool infectado);
    ~Vagon();
    int getNumero();
};

#endif