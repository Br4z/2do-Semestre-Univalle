#ifndef Estudiante_H
#define Estudiante_H
#include <iostream>
using namespace std;

/**
    CLASE:      Estudiante
    INTENCION:  Encargarse de guardar la información que un estudiante tiene.
    RELACIONES: se relaciona con un instituto
*/

class Estudiante
{
private:
    float nota;

public: 
    Estudiante(float nota);
    ~Estudiante();
    float getNota();
};
#endif