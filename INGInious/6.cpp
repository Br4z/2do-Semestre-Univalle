#include <iostream>
using namespace std;


int main() {
    int year,year2;
    cin >> year;
    cin >> year2;

    if (year % 4 != 0) year = year + (4 - (year % 4)); // Aseguramos el primer multiplo de 4 (aprovechando la implicacion del residuo).

    cout << "Años bisiestos entre dichos años:";

    for (int i = year; i <= year2; i += 4)
    {
        if (i % 100 == 0 )
        {
            if (i % 400 == 0)
            {
                cout << " " << i; // No sea multiplo de 100, pero si lo es que no sea de 400 tambien.
            }
        } else
        {
            cout << " " << i; // Multiplos de 4 excluyendo las condiciones anteriores.
        } 
    }
    return 0; 
}