// Evito la doble definición
#ifndef SUMA__
#define SUMA__

class Suma{
// Atributos
private:
int resultadoSuma;

// Métodos
public:
    Suma();
    ~Suma();
    int sumaPorValor(int valor1, int valor2);
    int sumaPorReferencia(int &ref1, int &ref2);
    int sumaPorPuntero(int *ptr1, int *ptr2);
    int getResultadoSuma();
    void setResultadoSuma(int &ref1);

// no olvidar comentar en suma.cpp  
// void SumaPorValor(int valor1, int valor2);
// void SumaPorReferencia(int &, int &);
// void SumaPorPuntero(int *ptr1, int *ptr2);
};
#endif