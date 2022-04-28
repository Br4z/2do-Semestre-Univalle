#ifndef Libro_H
#define Libro_H
#include <iostream>
#include <string>
using namespace std;

/**
    CLASE:      Libro
    INTENCION:  Guardar la información que un libro tiene.
    RELACIONES: Es contenida por libreria
*/

class Libro
{
private:
    string Titulo;
    string Autor;

public: 
    Libro(string Titulo,string Autor);
    ~Libro();
    string getTitulo();
    string getAutor();
};
#endif