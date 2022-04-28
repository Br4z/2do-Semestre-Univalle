/*
    Archivo: Servidor.h
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     Servidor
    INTENCION: Representar las características generales de un servidor con libros ("catalogo").
    RELACIONES:
    - Conoce a libros
*/

#ifndef SERVIDOR_H
#define SERVIDOR_H

#include "Libro.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Servidor
{
private:
    vector <Libro *> misLibros;

public:
    Servidor();
    ~Servidor(); 
    void addLibro(Libro* Libro);
    string librosxType(string type);
};
#else
class Servidor; 
#endif
