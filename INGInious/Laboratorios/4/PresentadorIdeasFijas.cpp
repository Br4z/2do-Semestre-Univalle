/*
    Archivo: PresentadorIdeasFijas.cpp
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

#include "PresentadorIdeasFijas.h"

PresentadorIdeasFijas::PresentadorIdeasFijas()
{
    nombre = "IdeasFijas";
}

PresentadorIdeasFijas::~PresentadorIdeasFijas()
{
    // No hay que hacer nada
}

double PresentadorIdeasFijas::entregarPremio()
{
    return 100;
}
