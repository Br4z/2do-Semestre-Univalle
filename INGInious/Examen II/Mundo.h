/*
    Archivo: Mundo.h
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     Mundo
    INTENCION: Representa un personaje dentro de una batalla.
    RELACIONES:
    - Contiene una batalla.
*/

#ifndef MUNDO_H
#define MUNDO_H

#include "Batalla.h"
#include <vector>

class Mundo
{
private:
    string name;
    Batalla magicBattle;

public:
    Mundo(string name);
    ~Mundo();
    void setEjercitos(vector<Personaje *> ejercito1, vector<Personaje *> ejercito2);
    void startConfrontation();
};
#else
class Mundo;
#endif