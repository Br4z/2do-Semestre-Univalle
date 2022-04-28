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

#include "PresentadorAleatorio.h"

PresentadorAleatorio::PresentadorAleatorio()
{
    nombre = "Aleatorio";
}

PresentadorAleatorio::~PresentadorAleatorio()
{
    // No hay que hacer nada
}

double PresentadorAleatorio::entregarPremio()
{
    return rand() % 300;
}
