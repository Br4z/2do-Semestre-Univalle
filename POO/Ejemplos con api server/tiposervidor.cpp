#include "tiposervidor.h"
#include <string>
#include <iostream>
using namespace std;

TipoServidor::TipoServidor()
{
    mensaje = "";

    // Se inician las posiciones del vector con ""
    for (int i = 0; i < size(suscriptor); i++)
    {
        suscriptor[i] = "";
    }

    // Se cargan tres elementos al vector
    suscriptor[0] = "Maria TS";
    suscriptor[1] = "Pedro TS";
    suscriptor[2] = "Jose TS";
}

TipoServidor::~TipoServidor()
{
}

// Método para mostrar los suscriptores de la clase TipoServidor
string TipoServidor::mostrarSuscriptor()
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