/*
    Archivo: Clase.h
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-23
    Fecha última modificación: 2022-01-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#ifndef Laboratorio_H
#define Laboratorio_H
#include <iostream>
#include <string>
#include "Recipiente.h"
using namespace std;

/**
    CLASE:      Lista
    INTENCION:  Manipular la temperatura de dos formas (punteros y referencias).
    RELACIONES: NINGUNA
*/

class Laboratorio
{
// Atributos
private:
    Recipiente agua;

// Métodos
public:
    Laboratorio();
    ~Laboratorio();
    void temperaturaFahrenheitReferencia(float &temperatura);
    void  temperaturaFahrenheitPuntero(float *temperatura); 
};
#endif      
