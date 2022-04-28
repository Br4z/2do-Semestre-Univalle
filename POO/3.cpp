// Programa para el ingreso de la información de 5 libros con variables

#include "iostream"
#include "string"
using namespace std;

int main()
{
    string titulos[5];
    string autores[5];
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    for(int i = 0; i < 5; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        //cin >> titulos[i]; //No funciona con espacios debido a que los espacios se entienden como saltos de linea (lo que da origen a posibles fallos de seguridad)
        getline(cin, titulos[i]);  
        // La funcion getline recibe como primer argumento el flujo de entrada de cin y como segundo argumento la variable en la que queremos poner el valor
        cout << "Autor: ";
        getline(cin, autores[i]);
    }
}