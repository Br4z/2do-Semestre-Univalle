#ifndef PELICULAS_H
#define PELICULAS_H

#include "tiposervidor.h"

// Subclase Películas hereda de la clase TipoServidor
class Peliculas : public TipoServidor
{
// Métodos
public:
    Peliculas();
    virtual ~Peliculas();
    // Método para mostrar suscriptores
    string mostrarSuscriptorPeliculas();
    // Método virtual
};
#endif