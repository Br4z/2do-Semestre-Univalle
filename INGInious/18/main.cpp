/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-02-09
    Fecha última modificación: 2022-02-09
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA:  En la biblioteca de la Universidad del Valle, se requiere un programa donde un bibliotecario pueda guardar varios libros con 
    dos características: título y autores, sin perder la información de ningún libro. El bibliotecario debe suministrar la cantidad de libros 
    y la información de cada libro.
*/

#include <iostream>
#include "Libreria.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {

    string cantidadDeLibros;
    Libreria *miLibreria = new Libreria();

    // cout << "Cantidad de libros: ";
    getline(cin,cantidadDeLibros);
    int aux = stoi(cantidadDeLibros); // Usar cin y despues getline da un error extraño

    miLibreria->ingresarLibros(aux);
    miLibreria->getCatalogo();

    delete miLibreria;
    miLibreria = nullptr;


    return 0;
}