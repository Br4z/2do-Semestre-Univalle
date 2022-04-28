#include "Cantante.h"
#ifndef RAPERO_H_
#define RAPERO_H_

class Rapero : public Cantante
{
public:
    Rapero(string nombre);
    ~Rapero();
    void cantar();
};
#else
class Rapero;
#endif