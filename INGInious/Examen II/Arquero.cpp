/*
    Archivo: Arquero.cpp
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "Arquero.h"

Arquero::Arquero(int numero, bool esSuper) : Personaje(numero,"Arquero", 5, 3, esSuper) // Primero asumo que es un arquero normal para escribir los metodos
{
    this->comprobarSuper(esSuper);
}

Arquero::~Arquero()
{
}

void Arquero:: comprobarSuper(bool esSuper) // Sobrescribiendo atributos si es super
{
    if(esSuper)
    {
        name = "Arquero++ " + to_string(number);
        life = 4;
        damage = 5;
    }
}
