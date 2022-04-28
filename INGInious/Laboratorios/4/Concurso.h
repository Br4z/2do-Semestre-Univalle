/*
    Archivo: Concurso.h
    Autor: Victor Bucheli
    Email: victor.bucheli@correounivalle.edu.co
    Fecha creación: 2021-011-09
    Fecha última modificación: 2022-03-05
    Versión: 0.1
    Licencia: GPL
*/

/**
    CLASE:     Concurso
    INTENCION: representa la etapa final de un concurso de televisión, donde ciertos presentadores van a entregar premios a los concursantes ganadores.
    - le puedo preguntar su nombre
    - le puedo solicitar que reciba un concursante
    - le puedo solicitar que reciba un presentador (en sus distintos tipos)
    - entregar los premios de los presentadores a los concursantes, en el mismo orden
    - mostrar que recibió cada concursante
    RELACIONES:
    - contiene un nombre
    - conoce los concursantes en el orden en que recibirán los premios (toma propiedad de ellos)
    - conoce a los tres tipos de presentadores (toma propiedad de ellos)
    - contiene la lista de nombres de presentadores, ordenada para entregar premios
*/

#ifndef CONCURSO_HH
#define CONCURSO_HH

#include "Concursante.h"
#include "Presentador.h"
#include <vector>
#include <string>
using namespace std;

class Concurso
{
protected:
    string nombre;
    vector<Concursante *> concursantes;
    vector<Presentador *> presentadores;
    vector<string> nombresPresentadores;

public:
    Concurso(string nombre); // Construye un Concurso con un nombre y un presupuesto para premios
    virtual ~Concurso(); // Destructor. Borra todos los concursantes y los tres presentadores
    virtual string comoTeLlamas(); // Dice cuál es nombre del Concurso
    virtual void nuevoConcursante(Concursante *concursante); // Añade un nuevo concursante. Toma propiedad de él
    virtual void nuevoPresentador(Presentador *presentador); // Añade un nuevo presentador de ideas fijas. Toma propiedad de él
    virtual void entregarPremios(); // Entrega premios a los concursanes, emparejando cada concursante con un presentador, es decir: el primer presentador entrega premio al primer concursante, el segundo presentador al segundo concursante, etc. y así sucesivamente hasta que se acaba el dinero del presupuesto del concurso
    virtual string mostrarPremiosDeConcursantes(); // retorna un string con cada concursante y el premio que obtuvo
};

#else
class Concurso; // Declaración adelantada
#endif
