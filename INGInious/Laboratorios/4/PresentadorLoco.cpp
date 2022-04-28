/*
    Archivo: PresentadorLoco.cpp
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

#include "PresentadorLoco.h"

PresentadorLoco::PresentadorLoco()
{
    nombre = "Loco";
}

PresentadorLoco::~PresentadorLoco()
{
    // No hay que hacer nada
}

double PresentadorLoco::entregarPremio()
{
    return 200 * nombre.size();
}
