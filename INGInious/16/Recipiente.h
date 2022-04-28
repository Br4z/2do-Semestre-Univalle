/*
    Archivo: Clase.h
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-23
    Fecha última modificación: 2022-01-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#ifndef Recipiente_H
#define Recipiente_H
#include <iostream>
using namespace std;

/**
    CLASE:      Recipiente
    INTENCION:  Representar los recipientes que tiene un laboratorio.
    RELACIONES: NINGUNA
*/

class Recipiente
{
// Métodos
public:
    Recipiente();
    ~Recipiente();
    void incrementoReferencia(float &temperatura);
    void  incrementoPuntero(float *temperatura); 
};
#endif      
