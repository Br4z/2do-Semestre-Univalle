/*
    Archivo: LibroElectronico.h
    Autor: Brandon Calderon Prieto         
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     LibroElectronico
    INTENCION: Representa un libro electrónico.
    RELACIONES:
    - Es un libro (si modificara la estructura de libro se pondria que "es parecido a un libro")
    
*/
#include "Libro.h"
#ifndef LIBROELECTRONICO_H
#define LIBROELECTRONICO_H

#include <string>
using namespace std;

class LibroElectronico : public Libro
{
// Gracias a la herencia tenemos los atributos protected de Libro
public:
    LibroElectronico(string nombreLibro, string mensaje);
    virtual ~LibroElectronico(); // Es un requerimiento que el destructor lleve virtual
    virtual string mostrarLibro();
};
#else
class LibroElectronico; 
#endif