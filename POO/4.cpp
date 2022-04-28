// Programa para el ingreso de la información de 5 libros con una matriz

#include "iostream"
#include "string"

using namespace std;

int main()
{   // No se puede usar una variable para saber cuantos libros se van a ingresar porque, el for debe aclararse antes de la ejecución
    // (constante en las palabras de la consola).
    string libros[5][2]; //Declaración de la matriz (con un total de 10 elementos tipo string).
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    string titulo ,autor;
    for(int i = 0; i < 5; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        getline(cin,titulo);
        cout << "Autor: ";
        getline(cin,autor);
        libros[i][0] = titulo; // La la columna "1" ya se sabe que es para el titulo.
        libros[i][1] = autor; // La la columna "2" ya se sabe que es para el autor.
    }
    system("pause");

    return 0;
}