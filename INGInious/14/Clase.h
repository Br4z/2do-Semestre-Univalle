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
using namespace std;

/**
    CLASE:      Clase
    INTENCION:  Invertir un numero.
    RELACIONES: NINGUNA
*/

class Clase
{
// Atributos
    private:

// Métodos
public:
    Clase();
    ~Clase();
    void setNumeroInvertido(float &numero); // aca enlazamos el objeto original introducido (para hacer cambios sobre el).
};
#endif      
