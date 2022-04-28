/*
    Archivo: Draconaurius.h
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     Draconaurius
    INTENCION: Representa un personaje Draconaurius dentro de una batalla.
    RELACIONES:
    - NINGUNA
*/

#ifndef DRACONAURIUS_H
#define DRACONAURIUS_H

#include "Personaje.h"


class Draconaurius : public Personaje
{
public:
    Draconaurius(int numero, bool esSuper);
    ~Draconaurius();
    virtual void comprobarSuper(bool esSuper);
};

#else
class Draconaurius; 
#endif