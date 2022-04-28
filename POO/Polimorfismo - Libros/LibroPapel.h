/*
    Archivo: LibroPapel.h
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     LibroPapel
    INTENCION: Representa un libro de papel.
    RELACIONES:
    - Es un libro (si modificara la estructura de libro se pondria que "es parecido a un libro")
    
*/
#include "Libro.h"
#ifndef LIBROPAPEL_H
#define LIBROPAPEL_H

#include <string>
using namespace std;

class LibroPapel : public Libro
{
// Gracias a la herencia tenemos los atributos protected de Libro
public:
    LibroPapel(string nombreLibro, string mensaje);
    virtual ~LibroPapel(); // Es un requerimiento que el destructor lleve virtual
    virtual string mostrarLibro();
};
#else
class LibroPapel; 
#endif