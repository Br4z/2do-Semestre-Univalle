/*
    Archivo: Concurso.cpp
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

#include "Concurso.h"
#include <iostream>
using namespace std;

Concurso::Concurso(string nombre)
    : nombre(nombre)
{
    for (int j = 0; j < presentadores.size(); j++)
    {
        concursantes[j] = nullptr;
    }
}

Concurso::~Concurso()
{
    for (int i = 0; i < concursantes.size(); i++)
    {
        delete concursantes[i];
        concursantes[i] = nullptr;
    }

    for (int j = 0; j < presentadores.size(); j++)
    {
        delete concursantes[j];
        concursantes[j] = nullptr;
    }
}

string Concurso::comoTeLlamas()
{
    return nombre;
}

void Concurso::nuevoConcursante(Concursante *concursante)
{
    concursantes.push_back(concursante);
}

void Concurso::nuevoPresentador(Presentador *presentador)
{
    presentadores.push_back(presentador);
    nombresPresentadores.push_back(presentador->comoTeLlamas());
}

void Concurso::entregarPremios()
{
    int cualPresentador = 0;
    for (int cualConcursante = 0; cualConcursante < concursantes.size(); cualConcursante++)
    {
        string name = concursantes[cualConcursante]->comoTeLlamas();
        double premio = 0;
        premio = presentadores[cualPresentador]->entregarPremio();

        concursantes[cualConcursante]->recibirPremio(premio);

        cualPresentador++;                                  // Aquí se pasa al siguiente presentador
        if (cualPresentador == nombresPresentadores.size()) // Comprueba si ya pasaron los presentadores
            cualPresentador = 0;                            // Vuelve al primer presentador
    }
}

string Concurso::mostrarPremiosDeConcursantes()
{
    string resultado;

    for (int i = 0; i < concursantes.size(); i++)
    {
        resultado += concursantes[i]->comoTeLlamas() + " ganó " +
        to_string(concursantes[i]->quePremioTeDieron()) + " bitcoins\n";
    }
    return resultado;
}
