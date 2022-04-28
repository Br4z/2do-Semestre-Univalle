#ifndef Instituto_H
#define Instituto_H
#include <iostream>
#include <vector>
#include "Estudiante.h"
using namespace std;

/**
    CLASE:      Instituto
    INTENCION:  Encargarse de gestionar los estudiantes.
    RELACIONES: se relaciona con estudiantes
*/

class Instituto
{
private:
    vector <Estudiante> estudiantes;

public: 
    Instituto();
    ~Instituto();
    void ingresarEstudiantes(int numeroEstudiantes); 
    void getPromedios();  
};
#endif