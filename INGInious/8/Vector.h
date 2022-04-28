/*
    Archivo: Vector.h
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2021-12-06
    Fecha última modificación: 2021-12-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

#ifndef Vector_H
#define Vector_H
#include <iostream>
#include <vector>
using namespace std;

/**
    CLASE:      MiVector
    INTENCION:  Representar un vector partiendo del ya definido por las librerías de c++ (necesario para del ejercicio).
    RELACIONES: NINGUNA
*/

class MiVector 
{
// Atributos
private:
    vector <int> elementos; // Trae un vector de enteros, vació por defecto

// Métodos
public:
    MiVector();
    ~MiVector();
    void construirVector(int numeroDatos);
};
#endif
