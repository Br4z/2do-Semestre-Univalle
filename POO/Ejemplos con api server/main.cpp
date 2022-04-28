#include "./httplib.h"
#include "tiposervidor.h"
#include "juegos.h"
#include "peliculas.h"
#include "musica.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    // Creo un objeto de tipo Server
    httplib::Server svr;

    // ---------------------------------
    /*
    // Método para buscar un Suscriptor por opción, con objetos estáticos, sin polimorfismo
    // opción 1 - tiposervidor
    // opción 2 - juegos
    // opción 3 - películas
    // opción 4 - música

    svr.Get(R"(/getsuscriptor/(\d+))", [&](const auto &req, auto &res) {
      // Se carga la opción
        auto numbers = req.matches[1];
        string number = numbers;
      // Se convierte la opción a entero
        int opcion = atoi(number.c_str());

      // Objetos
        TipoServidor tiposervidor;
        Juegos juegos;
        Peliculas peliculas;
        Musica musica;

      // Si la opción es 1, se muestran los suscriptores de TipoServidor
        if(opcion == 1){
        // Invoco el método mostrar suscriptor de la clase TipoServidor
        res.set_content(tiposervidor.mostrarSuscriptor(), "text/plain");
        }

      // Si la opción es 2, se muestran los suscriptores de Juegos
        if(opcion == 2){
        // Invoco el método mostrar suscriptor de la clase Juegos
        res.set_content(juegos.mostrarSuscriptorJuegos(), "text/plain");
        }

      // Si la opción es 3, se muestran los suscriptores de Peliculas
        if(opcion == 3){
        // Invoco el método mostrar suscriptor de la clase Peliculas
        res.set_content(peliculas.mostrarSuscriptorPeliculas(), "text/plain");
        }

      // Si la opción es 4, se muestran los suscriptores de Musica
        if(opcion == 4){
        // Invoco el método mostrar suscriptor de la clase Musica
        res.set_content(musica.mostrarSuscriptorMusica(), "text/plain");
        }
    });
      */

    // ---------------------------------
    /*
    // Método para buscar un Suscriptor por opción, con objetos estáticos, sin polimorfismo PERO se utiliza el método virtual de la clase TipoServidor
    // opcion 1 - tiposervidor
    // opcion 2 - juegos
    // opcion 3 - películas
    // opcion 4 - música
    svr.Get(R"(/getsuscriptor/(\d+))", [&](const auto &req, auto &res) {
      // Se carga la opción
        auto numbers = req.matches[1];
        string number = numbers;
      // Se convierte la opcion a entero
        int opcion = atoi(number.c_str());

      // Objetos
        TipoServidor tiposervidor;
        Juegos juegos;
        Peliculas peliculas;
        Musica musica;

      // Si la opcion es 1, se muestran los suscriptores de TipoServidor
        if(opcion == 1){
        // Invoco el método mostrar suscriptor de la clase TipoServidor
        res.set_content(tiposervidor.mostrarSuscriptor(), "text/plain");
        }

      // Si la opcion es 2, se muestran los suscriptores de Juegos
        if(opcion == 2){
        // Invoco el método mostrar suscriptor de la clase Juegos
        res.set_content(juegos.mostrarSuscriptor(), "text/plain");
        }

      // Si la opcion es 3, se muestran los suscriptores de Peliculas
        if(opcion == 3){
        // Invoco el método mostrar suscriptor de la clase Peliculas
        res.set_content(peliculas.mostrarSuscriptor(), "text/plain");
        }

      // Si la opcion es 4, se muestran los suscriptores de Musica
        if(opcion == 4){
        // Invoco el método mostrar suscriptor de la clase Musica
        res.set_content(musica.mostrarSuscriptor(), "text/plain");
        }
    });
    */

    // ---------------------------------
    /*
    // Método para buscar un Suscriptor por opción, con polimorfismo
    // opcion 1 - tiposervidor
    // opcion 2 - juegos
    // opcion 3 - películas
    // opcion 4 - música
    svr.Get(R"(/getsuscriptorpolimorfismo/(\d+))", [&](const auto &req, auto &res) {
      // Se carga la opción
        auto numbers = req.matches[1];
        string number = numbers;
      // Se convierte la opcion a entero
        int opcion = atoi(number.c_str());

      // Se crea un vector de objeto de TipoServidor
      vector <TipoServidor *> suscriptor;

      // Se adicionan elementos al vector de objetos
      suscriptor.push_back(new TipoServidor); // 0
      suscriptor.push_back(new Juegos); // 1
      suscriptor.push_back(new Peliculas); // 2
      suscriptor.push_back(new Musica); // 3

      // Si la opcion es 1, se muestran los suscriptores de TipoServidor
        if(opcion == 1){
        // Invoco el método mostrar suscriptor de la clase TipoServidor
        res.set_content(suscriptor[opcion-1]->mostrarSuscriptor(), "text/plain");
        }

      // Si la opcion es 2, se muestran los suscriptores de Juegos
        if(opcion == 2){
        // Invoco el método mostrar suscriptor de la clase Juegos
        res.set_content(suscriptor[opcion-1]->mostrarSuscriptor(), "text/plain");
        }

      // Si la opcion es 3, se muestran los suscriptores de Peliculas
        if(opcion == 3){
        // Invoco el método mostrar suscriptor de la clase Peliculas
        res.set_content(suscriptor[opcion-1]->mostrarSuscriptor(), "text/plain");
        }

      // Si la opcion es 4, se muestran los suscriptores de Musica
        if(opcion == 4){
        // Invoco el método mostrar suscriptor de la clase Musica
        res.set_content(suscriptor[opcion-1]->mostrarSuscriptor(), "text/plain");
        }
    });
    */
    // ---------------------------------

    // Método para adicionar un Suscriptor con funciones virtuales puras
    // opcion 1 - adicionar sin parámetro
    // opcion 2 - adicionar con parámetro
    svr.Get(R"(/postsuscriptor/(\d+))", [&](const auto &req, auto &res)
            {
    // Se carga la opción
    auto numbers = req.matches[1];
    string number = numbers;
    // Se convierte la opcion a entero
    int opcion = atoi(number.c_str());

    // Se crea un objeto de Juegos 
    Juegos juegos;

    // Si la opcion es 1, se adiciona un suscriptor (método sin parámetros de entrada) 
    if(opcion == 1){
        res.set_content(juegos.adicionarSuscriptor(), "text/plain");
    }

    // Si la opcion es 2, se adiciona un suscriptor (método con parámetro de entrada) 
    if(opcion == 2){
      // Defino un nombre para pasarlo como parámetro de entrada
        string nombre = "daniel";
        res.set_content(juegos.adicionarSuscriptor(nombre), "text/plain");
    } });

    // ---------------------------------

    // Mensaje de servidor en funcionamiento
    cout << "Servidor en funcionamiento..." << endl;
    svr.listen("0.0.0.0", 8080);
}