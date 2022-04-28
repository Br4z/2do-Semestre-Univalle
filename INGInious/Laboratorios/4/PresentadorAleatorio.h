/*
    Archivo: PresentadorAleatorio.h
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

/**
    CLASE:     PresentadorAleatorio
    INTENCION: Representa un presentador de televisión que tiene un algoritmo que calcula el valor del premio a entregar al azar. Además:
    - le puedo preguntar el nombre
    - le puedo pedir que entregue el premio
    RELACIONES:
    - Es un Presentador.h
*/

#ifndef PRESENTADORALEATORIO_HH
#define PRESENTADORALEATORIO_HH
#include "Presentador.h"
#include <string>
#include <cstdlib>
using namespace std;

class PresentadorAleatorio : public Presentador
{
public:
    PresentadorAleatorio(); // Construye un presentador de ideas fijas (ese va a ser su nombre)
    virtual ~PresentadorAleatorio(); // Destructor. No hace nada
    virtual double entregarPremio(); // Retorna el premio a entregar a un concursante (concretamente, un número al azar entre 0 y 300 bitcoins)
};

#else
class PresentadorAleatorio; // Declaración adelantada
#endif
