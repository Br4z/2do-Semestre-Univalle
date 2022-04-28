#include <iostream>
using namespace std;

int main() {

    int numero;
    cin >> numero;

    for (int i = 2; numero > 1; i++) // Si llega al numero , significa que lo termino de descomponer
    {
        while (numero % i == 0)
        {
            numero = numero / i;
            if (numero == 1) cout << i << "\n"; // Cuando el numero se dividió por el mismo, se llego a un primo
            else cout << i << " * ";
        }
    }    
    return 0;
}

/* Forma mas correcta usando solo whiles.
int main() {
    int numero,aux;
    cin >> numero;
    aux = 2;

    while (aux <= numero) // Es igual en el caso de que lleguemos a un primo
    {
        while (numero % aux == 0)
        {
            numero = numero / aux;
            if (numero == 1) cout << aux << "\n"; // Cuando el numero se dividió por el mismo,se llego a un primo
            else cout << aux << " * ";
        }

        aux++;
    }
    return 0;
}
*/

