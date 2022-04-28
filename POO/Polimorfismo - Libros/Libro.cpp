/*
    Archivo: Libro.cpp
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "Libro.h"

Libro:: Libro(string nombreLibro, string mensaje): nombreLibro(nombreLibro), mensaje(mensaje) // Equivalente a usar this->atributo = atributo
{

}

Libro:: ~Libro()
{

}

string Libro:: mostrarLibro()
{
    string string = "\nTipo: " + type + "\nNombre: " + nombreLibro + "\nDescripcion: " + mensaje + "\n";
    return string; 
}

string Libro:: getType()
{
    return type; 
}