#include <iostream>
#include "string"
using namespace std; 

int main() {
    int size;
    string entrada;

    cout << "Cuantos libros desea ingresar: ";

    getline(cin,entrada); // getline recibe en string

    size = stoi(entrada); // transformar el string en un numero, para poder ser leído por size

    string libros[size][2]; //Declaración de la matriz con el numero de libros que desea ingresar el autor
    cout << "Por favor ingrese la siguiente información de los Libros: \n";
    string titulo ,autor;
    for(int i = 0; i < size; i++)
    {
        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        getline(cin,titulo);
        cout << "Autor: ";
        getline(cin,autor);
        libros[i][0] = titulo; // La la columna "1" ya se sabe que es para el titulo
        libros[i][1] = autor; // La la columna "2" ya se sabe que es para el autor
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Libro: " << libros[i][0] << " Autor: " << libros[i][1] << endl;
    }

    return 0;
}
