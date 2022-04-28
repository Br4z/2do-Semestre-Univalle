#include "Multiplicacion.h"
#include "Suma.h"
#include <iostream>
using namespace std;

Multiplicacion::Multiplicacion()
{

}

Multiplicacion::~Multiplicacion()
{

}

void Multiplicacion::getMultiplicacion(int a,int b){
    int sumaAcumulada = a, suma;
    Suma objeto;
    for(int i = 1; i < b; i++)
    {
        suma = objeto.sumaPorValor(sumaAcumulada,a);
        sumaAcumulada = suma;
    }
    resultadoMultiplicacionPuntero = sumaAcumulada;

    cout << resultadoMultiplicacionPuntero << endl;
}