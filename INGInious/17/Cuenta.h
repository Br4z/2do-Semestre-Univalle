#ifndef Cuenta_H
#define Cuenta_H
#include <iostream>
using namespace std;

/**
    CLASE:      Cuenta
    INTENCION:  Hacer calculos según el numero de personas y el total de
    meses pagados.
    RELACIONES: NINGUNA
*/

class Cuenta
{
private:
    int numeroPersonas;
    int numeroMeses;  
    float totalPagado;

public: 
    Cuenta();
    ~Cuenta();
    void setNumeroPersonas(int numeroPersonas); 
    void setNumeroMeses(int numeroMeses); 
    float getTotalPagado(); 
};
#endif