/*
    Archivo: LibroElectronico.cpp
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "LibroElectronico.h"

LibroElectronico:: LibroElectronico(string nombreLibro, string mensaje) : Libro(nombreLibro, mensaje)  // Usamos el mismo constructor que usamos en Libro
{
    this-> type = "electronico";
}

LibroElectronico:: ~LibroElectronico()
{
    
}

string LibroElectronico:: mostrarLibro() 
{
    string aux = Libro::mostrarLibro();
    aux += "Tengo circuitos";
    return aux;
}


