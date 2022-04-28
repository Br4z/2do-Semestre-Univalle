// Programa que me imprime parte de las tablas de multiplicar del 1 hasta el 10.

#include <iostream>
using namespace std;

int main()
{
    cout << endl << "\t|\t";
    for(int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << endl;

    cout << "----------------------------------------------------" << endl;

    for(int i = 1; i <= 10; i++)
    {
    cout << i << "\t|\t";
        for(int j = 1; j<=10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}

