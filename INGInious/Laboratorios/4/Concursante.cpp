/*
    Archivo: Concursante.cpp
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

#include "Concursante.h"

Concursante::Concursante(string nombre)
    : nombre(nombre), bitcoinsDePremio(0)
{
}

Concursante::~Concursante()
{
}

string Concursante::comoTeLlamas()
{
    return nombre;
}

double Concursante::quePremioTeDieron()
{
    return bitcoinsDePremio;
}

void Concursante::recibirPremio(double bitcoinsDePremio)
{
    this-> bitcoinsDePremio += bitcoinsDePremio;
}
