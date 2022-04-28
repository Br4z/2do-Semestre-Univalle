#ifndef Bicicleta_H
#define Bicicleta_H
#include <iostream>
#include <string>
using namespace std;


class Bicicleta
{
private:
    string marca;

public:

    Bicicleta(string marca);
    ~Bicicleta();
    void pinchar();
    void despinchar();
};
#endif