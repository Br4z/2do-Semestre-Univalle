// Programa que imprime los numero primos hasta un numero dado (incluido)

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Hasta que numero quiere imprimir los números primos ?: ";
    cin >> numero;

    for (int i = 2; i <= numero; i++)
    {
        bool es_Primo = true; // Inicialmente tratemos al numero como ingresa como primo
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                es_Primo = false; // Si en el recorrido desde 2 hasta el numero llega a tener un divisor, entonces el numero no es primo
                break;
            }
        }
        if (es_Primo)
        { // Si en toda la ejecución la el programa no "demostró que el numero NO era primo entonces la variable se quedo en "true" por lo que lo imprime
            cout << i << "\t";
        }
    }
    system("PAUSE"); // Si lo ejecutas en la propia consola, para que no te lo cierre instataneamente
    return 0; // Para que el programa sepa que termino correctamente la ejecución
}