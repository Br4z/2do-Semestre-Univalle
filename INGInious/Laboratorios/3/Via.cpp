/*
    Archivo: Vagon.cpp
    Autores:
    Getial Getial Juan Sebastian
    <getial.juan@correounivalle.edu.co>
    Calderon Prieto Brandon
    <bcalderonprieto@gmail.com>
    Huertas Cadavid Nicolas Fernando
    <nicolas.huertas@correounivalle.edu.co>
    Fecha Creación: 2022-02-25
    Fecha Ultima Modificación: 2022-02-25
    Licencia: GNU-GPL
*/

#include <iostream>
#include "Via.h"
#include <string>
using namespace std;

Via::Via()
{
}

Via::~Via()
{
    for (int i = 0; i < vagones.size(); i++)
    {
        delete vagones[i];
        vagones[i] = nullptr;
    }
}

// string Via::estadoActual()
// {
//     string cadena = "";
//     for (int i = 0; i < vagones.size(); i++)
//     {
//         if (i == 0)
//         {
//             // Primer espacio esperado
//             string primerVagon = "| " + (to_string(vagones[i]->getNumero()));
//             cadena += primerVagon;
//         }
//         else
//         {
//             string auxVagon = to_string(vagones[i]->getNumero());
//             cadena += " | " + auxVagon;
//         }
//     }

//     cadena += " |";
//     return cadena;
// }

void Via::estadoActual()
{
    for(Vagon* i : vagones)
    {
        cout << "| " << i->getNumero() << " ";
    }
    cout << "|";
    cout << endl;
}

void Via::retrocederPor(Via &via) // Via cede vagón a algún ramal
{
    via.introducirVagon(vagones.back());
    vagones.pop_back();
}

void Via::avanzarDesde(Via &via) // Via cede vagón a la principal
{
    if (via.getVagones().size() > 0)
    {
        introducirVagon(via.getUltimoVagon());
        via.deleteUltimoVagon();
    }
}

void Via::introducirVagon(Vagon *nuevoVagon)
{
    vagones.push_back(nuevoVagon);
}

void Via::deleteUltimoVagon()
{
    vagones.pop_back();
}

vector<Vagon *> Via::getVagones()
{
    return vagones; // Lo retorna con puntero, con la posibilidad de hacer cambios en el objeto
}

Vagon *Via::getUltimoVagon()
{
    return vagones.back();
}
