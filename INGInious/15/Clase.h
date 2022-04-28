/*
    Archivo: Clase.h
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-23
    Fecha última modificación: 2022-01-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#ifndef Clase_H
#define Clase_H
#include <iostream>
#include <string>
using namespace std;

/**
    CLASE:      Lista
    INTENCION:  Contar las vocales de un string.
    RELACIONES: NINGUNA
*/

class Clase
{
// Métodos
public:
    Clase();
    ~Clase();
    void getVocales(string *sentence);
};
#endif      
