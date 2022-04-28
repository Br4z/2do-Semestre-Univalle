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
#include <string>
using namespace std;

/**
    CLASE:      Lista
    INTENCION:  Representar los recipientes que tiene un laboratorio.
    RELACIONES: NINGUNA
*/

class Recipiente
{
// Atributos
private:
    int temperaturaReferencia, temperaturaPuntero;

// Métodos
public:
    Recipiente();
    ~Recipiente();
    void setTemperaturaReferencia(float &temperatura);
    void setTemperaturaPuntero(float *temperatura);
    void incrementoReferencia();
    void  incrementoPuntero(); 
};
#endif      
