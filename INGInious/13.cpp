/*
    Archivo: 7.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-21
    Fecha última modificación: 2022-01-21
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <string>
using namespace std;

void intercambiar(int &primerNumero, int &segundoNumero) {
    int aux;
    aux = primerNumero;

    primerNumero = segundoNumero;
    segundoNumero = aux;

}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    intercambiar(a,b);
    cout << a << endl;
    cout << b << endl;
}