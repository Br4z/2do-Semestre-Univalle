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
    CLASE:      Lista
    INTENCION:  Clase general (en este caso para recibir y ordenar un array dinamico).
    RELACIONES: NINGUNA
*/

class Clase
{
private:
    float *array;
    int size = 0; // lLevo la cuenta de sus elementos como atributo, porque contar
    // un array es muy difícil por la forma como interactuá la memoria

public:
    Clase();
    ~Clase();
    void setArray(int numeroElementos);
    void getArrayOrdenado(string modo); // En modo me refiero a la forma de ordenarlo
};
#endif      