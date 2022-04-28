#ifndef TIPO_SERVIDOR_H
#define TIPO_SERVIDOR_H
#include <string>
using namespace std;

class TipoServidor
{
// Atributos protegidos, se utiliza la herencia
protected:
    string mensaje;
    string suscriptor[10];

// Métodos
public:
    // Constructor
    TipoServidor();
    // Se utiliza la palabra reservada virtual para el polimorfismo
    // Destructor
    virtual ~TipoServidor();
    // Mostrar suscriptor
    virtual string mostrarSuscriptor();
};
#endif