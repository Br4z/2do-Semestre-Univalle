#include "httplib.h"
#include "Servidor.h"
#include "LibroPapel.h"
#include "LibroElectronico.h"
#include "AudioLibro.h"
#include <iostream>
using namespace std;

/*
Para visualizar ingrese al link "http://api-polimorfismo-server.br4z.repl.co/libros/n" donde <n> es la opcion 
del programa.
*/

int main(void)
{
    // Creo un objeto de tipo Server
    httplib::Server svr;

    // ---------------------------------

    // Método para buscar libros por opción, con polimorfismo

    // opcion 1 - Libros de papel
    // opcion 2 - Libros electronicos
    // opcion 3 - Audio libros

    svr.Get(R"(/Libros/(\d+))", [&](const auto &req, auto &res) {
        // Se carga la opción
        auto numbers = req.matches[1];
        string number = numbers;
        // Se convierte la opcion a entero
        int opcion = atoi(number.c_str());

        Servidor SVLibros;

        vector<Libro *> libros =
            {
                new LibroElectronico("La perla", "drama y suspenso"),
                new LibroPapel("El increible mundo de Sofia", "ciencia ficcion y educativo"),

                new AudioLibro("Un cuento oscuro", "Fantasia y drama")

            };

        for (int i = 0; i < libros.size(); i++) // Meter los libros en el vector libros que contiene el "servidor"
        {
            SVLibros.addLibro(libros[i]);
        }

        switch (opcion)
        {
        case 1:
            res.set_content(SVLibros.librosxType("papel"), "text/plain");
            break;
        case 2:
            res.set_content(SVLibros.librosxType("electronico"), "text/plain");
            break;
        case 3:
            res.set_content(SVLibros.librosxType("audio"), "text/plain");
            break;
        default:
            res.set_content("No selecciono una opcion valida", "text/plain");
            break;
        }
    });
        // ---------------------------------

        // ---------------------------------

        // Mensaje de servidor en funcionamiento
        cout << "Servidor en funcionamiento..." << endl;
        svr.listen("0.0.0.0", 8080);
}