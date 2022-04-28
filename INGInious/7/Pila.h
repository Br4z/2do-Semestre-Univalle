/*
    Archivo: Pila.h
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#ifndef Pila_H
#define Pila_H
#include <iostream>
#include <stack>
using namespace std;

/**
    CLASE:      Pila
    INTENCION:  Representar una pila con las características de una (funciones en este caso).
    RELACIONES: NINGUNA
*/

class Pila 
{
// Atributos
private:
    stack <int> elementos; // Por defecto el "stack" se crea vació
// Métodos
public:
    Pila();
    ~Pila();
    void size();
    void apilar(int numero);
    void sumarElementos();
    void vaciar();
};
#endif