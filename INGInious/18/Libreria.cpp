/*
    Archivo: Libreria.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Libreria.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo Libreria.
Prototipo: Libreria nombre_Objeto
Ejemplos: 
Libreria miLibreria

*/

Libreria::Libreria()
{

}

Libreria::~Libreria()
{

}

/*

Propósito: Ingresar una cierta cantidad de libros al vector que contiene los libros.
Prototipo: nombre_Objeto.ingresarLibros(int numero)
Contrato:  (numero) -> 
Ejemplos: 
miLibreria.ingresarLibros(2)

*/

void Libreria::ingresarLibros(int numeroLibros)
{
    for(int i = 0; i < numeroLibros; i++)
    {
        string Titulo, Autor;
        //cout << "Titulo: ";
        getline(cin,Titulo);
        //cout << "Autor: ";
        getline(cin,Autor);
        //Libro *miLibro = new Libro(Titulo,Autor);
        Libro miLibro(Titulo,Autor);
        libros.push_back(miLibro);
        
    }
    // cout << endl;
}

/*

Propósito: Retornar los libros que tiene la libreria (especificamente el vector) Titulo - Autor.
Prototipo: nombre_Objeto.getCatalogo()
Contrato:  () -> string's
Ejemplos: 
miliberia.getCatalogo()

*/

void Libreria::getCatalogo()
{
    for(int i = 0;i < libros.size(); i++)
    {
        cout << libros[i].getTitulo() << " - " << libros[i].getAutor() << endl;
    }
}










