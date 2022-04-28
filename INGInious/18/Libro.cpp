/*
    Archivo: Libro.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Libro.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Libro.
Prototipo: Libro nombre_Objeto(string, string)
Ejemplos: 
Libro miLibro("Camus", "El Extranjero")

*/

Libro::Libro(string Titulo,string Autor)
{
    this -> Titulo = Titulo;
    this -> Autor = Autor;
}

Libro::~Libro()
{

}

/*

Propósito: Obtener el titulo de un libro.
Prototipo: nombre_Objeto.getTitulo()
Contrato:  () -> string
Ejemplos: 
miLibro.getTitulo()

*/

string Libro::getTitulo()
{
    return Titulo;
}

/*

Propósito: Obtener el autor de un libro.
Prototipo: nombre_Objeto.getAutor()
Contrato:  () -> string
Ejemplos: 
miLibro.getAutor()

*/

string Libro::getAutor(){
    return Autor;
}













