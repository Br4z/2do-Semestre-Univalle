#include "musica.h"

// Constructor
Musica::Musica()
{
    // Se utiliza el parámetro protegido de la clase TipoServidor
    mensaje = "";

    // Se inicia las posiciones del vector con ""
    for (int i = 0; i < size(suscriptor); i++)
    {
        suscriptor[i] = "";
    }

    // Se carga un elemento al vector de la clase TipoServidor
    suscriptor[0] = "juan M";
    suscriptor[1] = "carlos M";
}

Musica::~Musica()
{

}

// Método para mostrar los suscriptores de la clase Música
string Musica::mostrarSuscriptorMusica()
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