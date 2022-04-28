// Evito la doble definición
#ifndef MULTIPLICACION__
#define MULTIPLICACION__
#include <iostream>
using namespace std;

class Multiplicacion{
// Atributos
private:
    int resultadoMultiplicacionValor;
    int resultadoMultiplicacionReferencia;
    int resultadoMultiplicacionPuntero;

// Métodos
public:
    Multiplicacion();
    ~Multiplicacion();
    void getMultiplicacion(int a, int b);
    void hacerProductoPorReferencia(int &a, int &b);
    void hacerProductoPorPuntero(int *a, int *b);
};
#endif