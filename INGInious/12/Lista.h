/*
    Archivo: Lista.h
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-15
    Fecha última modificación: 2022-01-15
    Versión: 0.1
    Licencia: GNU-GPL
*/

#ifndef Lista_H
#define Lista_H
#include <vector>
#include <iostream>
using namespace std;

/**
    CLASE:      Lista
    INTENCION:  Representar una lista con las características de una (funciones en este caso, sacadas de la libreria para vectores)
    para sacar su promedio y otros datos.
    RELACIONES: NINGUNA
*/

class Lista
{
// Atributos
private:
    vector <float> numeros;
    float promedio;
    int mayoresAlPromedio, menoresAlPromedio; // Son enteros porque solo cuentan elementos

// Métodos
public:
    Lista();
    ~Lista();
    void ingresarDiezNumerosEnLaLista();
    void calcularPromedioDeLaLista();
    void numerosMayoresAlPromedio();
    void numerosMenoresAlPromedio();
};
#endif      
