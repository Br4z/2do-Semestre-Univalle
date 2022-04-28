/*
    Archivo: Arquero.h
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     Arquero.h
    INTENCION: Representa un personaje arquero dentro de una batalla.
    RELACIONES:
    - NINGUNA
*/

#ifndef ARQUERO_H
#define ARQUERO_H

#include "Personaje.h"

class Arquero : public Personaje
{
public:
    Arquero(int numero, bool esSuper);
    ~Arquero();
    virtual void comprobarSuper(bool esSuper);
};
#else
class Arquero;
#endif