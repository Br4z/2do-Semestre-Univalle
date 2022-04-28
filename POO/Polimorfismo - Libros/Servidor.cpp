/*
    Archivo: Servidor.cpp
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "Servidor.h"

Servidor:: Servidor()
{
    
}

Servidor:: ~Servidor()
{
    for(Libro* libro: misLibros)
    {
        delete libro;
        libro = nullptr;
    }
}

void Servidor:: addLibro(Libro* Libro)
{
    misLibros.push_back(Libro);

}

string Servidor:: librosxType(string type)
{
    string libros = "";
    
    for(Libro* libro : misLibros)
    {
        if(libro->getType() == type)
        {
            libros += libro->mostrarLibro();
        }        
    }
    return libros;
}