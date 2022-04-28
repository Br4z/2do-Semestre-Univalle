#ifndef ABSTRACTA_H
#define ABSTRACTA_H
#include <string>
using namespace std;

class Abstracta
{
// Métodos
public:
    Abstracta();  // Constructor
    // Se utiliza la palabra reservada virtual para el polimorfismo
    virtual ~Abstracta(); // Destructor
    // Funciones virtuales puras
    virtual string adicionarSuscriptor() = 0;
    virtual string adicionarSuscriptor(string name) = 0;
};
#endif