/*
    Archivo: Personaje.h
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     Personaje
    INTENCION: Representa un personaje dentro de una batalla.
    RELACIONES:
    - NINGUNA
*/

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
using namespace std;

class Personaje
{
protected:
    int number;
    string name;
    int life;
    int damage;
    bool isSuper;

public:
    // Vamos a tener dos constructores
    Personaje(int number, string name, int life, int damage, bool isSuper);
    virtual ~Personaje();
    virtual void comprobarSuper(bool esSuper) = 0;
    virtual string getName();
    virtual void setLife(int newLife); // Esto es lo único que se modificara en los personajes durante su ejecución, al menos para este caso
    virtual int getLife();
    virtual int getDamage();
    virtual void atack(Personaje &soldado);
};
#else
class Personaje;
#endif