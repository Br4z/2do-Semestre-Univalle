#include "Suma.h"
#include <iostream>
using namespace std;

Suma::Suma()
{

}

Suma::~Suma()
{

}


int Suma::sumaPorValor(int _valorA, int _valorB)
{
    resultadoSuma = _valorA + _valorB;
    
    return resultadoSuma;
}

