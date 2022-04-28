#include <iostream>
using namespace std;


int main() {
    
    int altura, espaciado;
    cin >> altura;
    espaciado = altura - 1; // Relación entre espaciado según la fila (en la ultima fila no hay)

    for (int i = 1; i <= altura ; i++)
    {
        for(int j = 0; j < espaciado; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) // Si se quiere empezar por un solo asterisco, la condición cambia a k <= 2 * i - 1 (formula que guiá el numero de astericos en las filas)
        {
            cout << "**";
        }
        cout << "\n";
        espaciado--;
    }
    return 0;
}

/*
int main() {
    
    int altura, espaciado,contador;
    cin >> altura;
    espaciado = altura - 1;
    contador = 1;
    
    do
    {
        for(int j = 0; j < espaciado; j++)
        {
            cout << " ";
        }

        for (int i = 1; i <= contador; i++)
        {
            cout << "**";
        }

        cout << "\n";
        contador = contador + 1;
        espaciado = espaciado - 1;

    } while(contador <= altura); // es menor y igual por que ya contamos la primera ejecución desde el principio

}
*/