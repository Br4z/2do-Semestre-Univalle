/*
    Archivo: Concursante.h
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

/**
    CLASE:     Concursante
    INTENCION: representa un concursante ganador de un concurso de televisión que va a recibir su premio. Además:
    - le puedo solicitar que reciba el premio
    - le puedo preguntar su nombre y el premio recibido
    RELACIONES:
    - contiene un nombre
    - contiene el premio que reciba, en bitcoins
*/

#ifndef CONCURSANTE_H
#define CONCURSANTE_H

#include <string>
using namespace std;

class Concursante
{
protected:
    string nombre;
    double bitcoinsDePremio;

public:

    Concursante(string nombre); // Construye un Concursante con un nombre. Inicialmente no tiene ningún premio
    virtual ~Concursante(); // Destructor. No hace nada
    virtual string comoTeLlamas(); // Dice cuál es nombre
    virtual double quePremioTeDieron(); //  Dice cuál fue el premio que recibió
    virtual void recibirPremio(double bitcoinsDePremio); // Recibe el premio del concurso (una cierta cantidad de bitcoins)
};

#else
class Concursante; // Declaración adelantada
#endif
