/*
    Archivo: PresentadorIdeasFijas.h
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

/**
    CLASE:     PresentadorIdeasFijas
    INTENCION: Representa un presentador de televisión que siempre entrega un premio del mismo valor. Además:
    - le puedo preguntar el nombre
    - le puedo pedir que entregue el premio
    RELACIONES:
    - contiene un nombre
*/

#ifndef PRESENTADORIDEASFIJAS_HH
#define PRESENTADORIDEASFIJAS_HH
#include "Presentador.h"
#include <string>
using namespace std;

class PresentadorIdeasFijas : public Presentador
{
public:
    PresentadorIdeasFijas(); // Construye un presentador de ideas fijas (ese va a ser su nombre)
    virtual ~PresentadorIdeasFijas(); // Destructor. No hace nada
    virtual double entregarPremio(); // Retorna el premio a entregar a un concursante (concretamente, 100 bitcoins)
};

#else
class PresentadorIdeasFijas; // Declaración adelantada
#endif
