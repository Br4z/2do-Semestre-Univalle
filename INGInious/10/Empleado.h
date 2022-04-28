#ifndef Empleado_H
#define Empleado_H
#include <iostream>
#include <string>
using namespace std;

/**
    CLASE:      Empleado
    INTENCION:  Representar un empleado con las características de una (funciones en este caso) para darles una calificación.
    RELACIONES: NINGUNA
*/

class Empleado
{
// Atributos
private:
    string calificacion; // Por defecto se crea vaciá

// Métodos
public:
    Empleado();
    ~Empleado();
    void ingresarCalificacion();
    void evaluarCalificacion();
};
#endif      
