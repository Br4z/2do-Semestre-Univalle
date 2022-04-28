/*
    Archivo: LibroPapel.cpp
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "LibroPapel.h"

LibroPapel:: LibroPapel(string nombreLibro, string mensaje) : Libro(nombreLibro, mensaje) // Usamos el mismo constructor que usamos en Libro
{
    this->type = "papel";
}

LibroPapel:: ~LibroPapel()
{

}

string LibroPapel:: mostrarLibro() 
{
    string aux = Libro::mostrarLibro();
    aux += "No me eches agua !";
    return aux;
}

