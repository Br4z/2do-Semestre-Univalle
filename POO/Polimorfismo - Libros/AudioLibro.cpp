/*
    Archivo: AudioLibro.cpp
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "AudioLibro.h"

AudioLibro:: AudioLibro(string nombreLibro, string mensaje) : Libro(nombreLibro, mensaje) // Usamos el mismo constructor que usamos en Libro
{
    this->type = "audio";
}

AudioLibro:: ~AudioLibro()
{

}

string AudioLibro:: mostrarLibro() 
{
    string aux = Libro::mostrarLibro();
    aux += "Solo me escucho";
    return aux;
}

