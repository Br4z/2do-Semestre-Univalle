#include <iostream>
#include "./httplib.h"
using namespace std;

/*
Para visualizar ingrese al link "http://api-polimorfismo-server.br4z.repl.co/libros/n" donde <n> es la opcion del programa.
*/

int main()
{
    // Creo un objeto de tipo Cliente
    // Paso como parámetro la URL base del servidor
    httplib::Client cli("http://api-polimorfismo-server.br4z.repl.co"); // La libreria esta hecha para http

    auto res = cli.Get("/Libros/1");

    if (res)
    {
        // El servidor devuelve el estado y el cuerpo, que es un mensaje
        cout << res->status << endl;
        cout << res->body << endl;
    }
    else
    {
        cout << "error: " << httplib::to_string(res.error()) << endl;
    }

    auto res2 = cli.Get("/Libros/2");

    if (res2)
    {
        cout << res->status << endl;
        cout << res->body << endl;
    }
    else
    {
        cout << "error: " << httplib::to_string(res.error()) << endl;
    }

    auto res3 = cli.Get("/Libros/3");

    if (res3)
    {
        cout << res->status << endl;
        cout << res->body << endl;
    }
    else
    {
        cout << "error: " << httplib::to_string(res.error()) << endl;
    }
}