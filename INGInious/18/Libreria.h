#ifndef Liberia_H
#define Liberia_H
#include <iostream>
#include <vector>
#include "Libro.h"
using namespace std;

/**
    CLASE:      Libreria
    INTENCION:  Gestionar los libros.
    RELACIONES: Contiene libros
*/

class Libreria
{
    private:
    vector <Libro> libros;

    public: 
    Libreria();
    ~Libreria();
    void ingresarLibros(int numeroLibros); 
    void getCatalogo();  
};
#endif