#include "LibroElectronico.h"
#include "LibroPapel.h"
#include "AudioLibro.h"
#include "Servidor.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int answer;
    Servidor SVLibros;

    vector <Libro *> libros =
    {
        new LibroElectronico("La perla","drama y suspenso"),
        new LibroPapel("El increíble mundo de Sofia","ciencia ficción y educativo"),
        new AudioLibro("Un cuento oscuro","Fantasia y drama")

    };

    for(int i = 0; i < libros.size(); i++) // Meter los libros en el vector de libros que contiene el "servidor"
    {
        SVLibros.addLibro(libros[i]);
    }

    cout << "Por que tipo de libro desea filtrar la base de datos ? ";
    string opciones = "1.Papel \n2.Electrónico \n3.Audio \n";
    cout << opciones;
    cin >> answer;

    switch (answer)
    {
    case 1:
        SVLibros.librosxType("Papel");
        break;
    case 2:
        SVLibros.librosxType("electrónico");
        break;
    case 3:
        SVLibros.librosxType("audio");
        break;
    default:
        cout << "No selecciono una opción valida";
        break;
    }
}