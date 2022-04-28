/*
    Archivo: PresentadorLoco.h
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

/**
    CLASE:     PresentadorLoco
    INTENCION: Representa un presentador de televisión que tiene un algoritmo raro para calcular el valor del premio a entregar. Además:
    - le puedo preguntar el nombre
    - le puedo pedir que entregue el premio
    RELACIONES:
    - contiene un nombre
*/

#ifndef PRESENTADORLOCO_HH
#define PRESENTADORLOCO_HH
#include "Presentador.h"
#include <string>
using namespace std;

class PresentadorLoco : public Presentador
{
public:
    PresentadorLoco(); // Construye un presentador aleatorio (ese va a ser su nombre)
    virtual ~PresentadorLoco(); // Destructor. No hace nada
    virtual double entregarPremio(); // Retorna el premio a entregar a un concursante (concretamente, el número de letras de su nombre multiplicado por 200)
};

#else
class PresentadorLoco; // Declaración adelantada
#endif
