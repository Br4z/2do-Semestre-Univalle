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

#ifndef VIA_H
#define VIA_H
#include "Vagon.h"
#include <vector>
#include <iostream>

using namespace std;

/**
    CLASE:     Via.
    INTENCION: Representar una via de la estación.
    RELACIONES:
    - Conoce Vagon
*/

class Via
{
private:
    vector<Vagon *> vagones;

public:
    Via();
    ~Via();
    void introducirVagon(Vagon *nuevoVagon);
    void retrocederPor(Via &via);
    void avanzarDesde(Via &via);
    void estadoActual();
    vector<Vagon *> getVagones();
    void deleteUltimoVagon();
    Vagon *getUltimoVagon();
};
#else
class Via;
#endif