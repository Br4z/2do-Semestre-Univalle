#ifndef MUSICA_H
#define MUSICA_H

#include "tiposervidor.h"

// Subclase Música hereda de la clase TipoServidor
class Musica : public TipoServidor
{
// Métodos
public:
    Musica();
    virtual ~Musica();
    // Método para mostrar suscriptor
    string mostrarSuscriptorMusica();
    // Método virtual
};
#endif