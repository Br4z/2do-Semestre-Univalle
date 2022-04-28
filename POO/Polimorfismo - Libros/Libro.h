/*
    Archivo: Libro.h
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     Libro
    INTENCION: Representar un las características generales de un libro.
    RELACIONES:
    - NINGUNA
    
*/

#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
using namespace std;

class Libro
{
protected:
    string mensaje;
    string nombreLibro;
    string type;

public:
    Libro(string nombreLibro, string mensaje);
    virtual ~Libro(); // Es un requerimiento que el destructor lleve virtual
    virtual string mostrarLibro(); // En cada tipo de libro incorporare un pequeño mensaje
    string getType(); // Metodo que vamos a usar en el servidor para filtrar por tipo

};

#else
class Libro; 
#endif
