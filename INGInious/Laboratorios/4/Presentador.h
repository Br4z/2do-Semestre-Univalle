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

#ifndef PRESENTADOR_H
#define PRESENTADOR_H
#include <string>
using namespace std;

/**
    CLASE:     Presentador
    INTENCION: Representar las características generales de un presentador.
    RELACIONES:
    - NINGUNA 
*/

class Presentador
{
protected:
    string nombre;

public:
    Presentador();
    ~Presentador();
    string comoTeLlamas();
    virtual double entregarPremio() = 0; // Clase abstracta
};

#else
class Presentador;
#endif