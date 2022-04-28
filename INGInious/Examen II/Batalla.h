/*
    Archivo: Batalla.h
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    CLASE:     Batalla
    INTENCION: Representa una batalla dentro de un mundo.
    RELACIONES:
    - Contiene personajes (para cada ejercito).
*/

#ifndef BATALLA_H
#define BATALLA_H

#include "Personaje.h"
#include <vector>
#include <iostream>

class Batalla
{

private:
    vector<Personaje *> ejercito1;
    vector<Personaje *> ejercito2;

public:
    Batalla();
    ~Batalla();
    int getNumeroSoldados(int ejercito);
    vector<Personaje *> getSoldados(int ejercito);
    void addSoldado(Personaje *soldado, int ejercito); // Puntero porque va a recibir objetos dinamicos.
    // soldado1 ataca a soldado2 (de ejercito 1 a ejercito 2)
    void confrontation(Personaje &soldado1, Personaje &soldado2); // Referencias para afectar a los propios objetos
    bool isALooser(vector<Personaje *> ejercito);// Las comprobaciones solo son necesarias despues de cada ataque, para el vector de ejercito que reciba (en otro metodo se hacen las dos)
    int getSoldadosVivos(vector<Personaje *> ejercito);
};
#else
class Batalla;
#endif