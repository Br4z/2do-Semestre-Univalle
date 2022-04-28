#include "Cantante.h"
#ifndef MARIACHI_H_
#define MARIACHI_H_

class Mariachi : public Cantante
{
public:
    Mariachi(string nombre);
    ~Mariachi();
    void cantar();
};
#else
class Mariachi;
#endif