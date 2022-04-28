#ifndef JUEGOS_H
#define JUEGOS_H

#include "tiposervidor.h"
#include "abstracta.h"

// Subclase Juegos hereda de la clase TipoServidor
class Juegos : public TipoServidor, public Abstracta // Herencia multiple
{
// Métodos
public:
    Juegos();
    virtual ~Juegos();
    string mostrarSuscriptorJuegos(); // Método para mostrar suscriptor
    // Métodos virtuales
    virtual string adicionarSuscriptor();
    virtual string adicionarSuscriptor(string nombre);
};
#endif