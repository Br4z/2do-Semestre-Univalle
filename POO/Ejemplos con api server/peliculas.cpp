#include "peliculas.h"

// Método constructor
Peliculas::Peliculas()
{
    // Se utiliza el parámetro de la clase TipoServidor
    mensaje = "";

    // Se inician todas las posiciones del vector con ""
    for (int i = 0; i < size(suscriptor); i++)
    {
        suscriptor[i] = "";
    }

    // Se carga un elemento al vector de la clase TipoServidor
    suscriptor[0] = "pilar P";
}

Peliculas::~Peliculas()
{

}

// Método para mostrar los suscriptores de la clase Pelicula
string Peliculas::mostrarSuscriptorPeliculas()
{
    for (int i = 0; i < size(suscriptor); i++)
    {
        if (suscriptor[i] != "")
        {
            mensaje += suscriptor[i] + " - ";
        }
    }
    return mensaje;
}

// Método virtual
