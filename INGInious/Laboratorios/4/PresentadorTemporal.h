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

/**
    CLASE:     PresentadorTemporal
    INTENCION: Representa un presentador temporal
    RELACIONES:
    - Es un Presentador.h
*/

#ifndef PRESENTADORTEMPORAL_H
#define PRESENTADORTEMPORAL_H
#include "Presentador.h"
#include <string>
#include <ctime>
using namespace std;

class PresentadorTemporal : public Presentador
{
public:
    PresentadorTemporal(); // Construye un presentador aleatorio (ese va a ser su nombre)
    virtual ~PresentadorTemporal(); // Destructor. No hace nada
    virtual double entregarPremio(); // Retorna el premio a entregar a un concursante (concretamente, el número de letras de su nombre multiplicado por 200)
};

#else
class PresentadorTemporal; // Declaración adelantada
#endif