/*
    Archivo: Draconaurius.cpp
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "Draconaurius.h"

Draconaurius:: Draconaurius(int numero, bool esSuper) : Personaje(numero,"Draconaurius", 2, 1, esSuper) // Primero asumo que es un Draconaurius normal para escribir los metodos
{
    this->comprobarSuper(esSuper);
}

Draconaurius:: ~Draconaurius()
{
    
}

void Draconaurius:: comprobarSuper(bool esSuper) // Sobrescribiendo atributos si es super
{
    if(esSuper)
    {
        name = "Draconaurius++ " + to_string(number);
        life = 3;
        damage = 1;
    }
}

