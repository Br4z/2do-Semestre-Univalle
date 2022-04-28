#ifndef Numero_H
#define Numero_H
#include <iostream>
using namespace std;

/**
    CLASE:      Numero
    INTENCION:  Representar un numero para analizar su composicion.
    RELACIONES: NINGUNA
*/

class Numero
{
// Atributos
private:
    int numero;

// Métodos
public:
    Numero();
    ~Numero();
    void ingresarNumero();
    void analizar();
};
#endif      
