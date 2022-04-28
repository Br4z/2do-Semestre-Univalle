/*
    Archivo: Personaje.cpp
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "Personaje.h"

Personaje::Personaje(int number, string name, int life, int damage, bool esSuper)
{   
    this->number = number;
    this->name = name + " " + to_string(number);
    this->life = life;
    this->damage = damage;
}

Personaje::~Personaje()
{

}

string Personaje::getName()
{
    return name;
}

void Personaje::setLife(int newLife)
{
    life = newLife;
}

int Personaje::getLife()
{
    return life;
}

int Personaje::getDamage()
{
    return damage;
}

void Personaje::atack(Personaje &soldado)
{
    int newLife = soldado.getLife() - this->damage;
    soldado.setLife(newLife);

    // if (newLife >= 0) // Si el atacado sigue vivo devuelve el ataque
    // {
    //     life = life - soldado.getDamage();
    // }
    life = life - soldado.getDamage(); // Al parecer no importa si muere, siempre ataca
}