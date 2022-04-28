/*

    Archivo: Jugador.cpp
    Autor:
    Getial Getial Juan Sebastian
    <getial.juan@correounivalle.edu.co>
    Calderon Prieto Brandon
    <bcalderonprieto@gmail.com>
    Huertas Cadavid Nicolas Fernando
    <nicolas.huertas@correounivalle.edu.co>
    Fecha Creación: 2022-03-11
    Fecha Ultima Modificación: 2022-03-11
    Licencia: GNU-GPL

*/

#include "PresentadorTemporal.h"

PresentadorTemporal::PresentadorTemporal()
{
    nombre = "Temporal";
}

PresentadorTemporal::~PresentadorTemporal()
{
    // No hay que hacer nada
}

double PresentadorTemporal::entregarPremio()
{
    time_t tiempoActual;
    tiempoActual = time(NULL);
    tm *tm_local = localtime(&tiempoActual);
    return 100 * tm_local->tm_min;
}
