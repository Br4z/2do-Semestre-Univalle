#ifndef Cola_H
#define Cola_H
#include <iostream>
#include <string>
#include <queue>
using namespace std;

/**
    CLASE:      Cola
    INTENCION:  Representar una cola con las características de una (funciones en este caso) para aplicarlas a la situación de un 
    lavadero de autos.
    RELACIONES: NINGUNA
*/

class Cola
{
// Atributos
    private:
    queue <string> placas; // Por defecto se crea vaciá

// Métodos
public:
    Cola();
    ~Cola();
    void encolar(string placa);
    void desencolar();
    void proximo();
    void pendientes();
};
#endif      
