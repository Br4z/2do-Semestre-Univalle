/*
    Archivo: Espectador.h
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-14
    Fecha última modificación: 2022-03-14
    Versión: 0.1
    Licencia: GNU-GPL
*/

#ifndef ESPECTADOR_H_
#define ESPECTADOR_H_
#include "Persona.h"

class Espectador : public Persona
{
private:
    bool gusto;

public:
    Espectador(string nombre);
    ~Espectador();
    void setGustarBanda(bool gusto);
    void imprimir(ostream &flujo) throw(int);
};
#else
class Espectador;
#endif