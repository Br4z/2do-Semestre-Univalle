#include <iostream>
using namespace std;
#include "Rapero.h"

Rapero::Rapero(string nombre) : Cantante(nombre)
{
}

Rapero::~Rapero()
{
}

void Rapero::cantar()
{
    cout << "Uh, sama lama duma lamaa you assuming I'm a human What I gotta do to get it through to you I'm superhuman Innovative and I'm made of rubber" << endl;
}