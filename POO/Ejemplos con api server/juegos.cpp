#include "juegos.h"
#include "abstracta.h"

// Constructor
Juegos::Juegos()
{
    // Se utiliza el parámetro protegido de la clase TipoServidor
    mensaje = "";

    // Se inicia las posiciones del vector con ""
    for (int i = 0; i < size(suscriptor); i++)
    {
        suscriptor[i] = "";
    }

    // Se carga un elemento al vector de la clase TipoServidor
    suscriptor[0] = "isabel J";
}

Juegos::~Juegos()
{

}

// Método para mostrar los suscriptores de la clase Juego
string Juegos::mostrarSuscriptorJuegos()
{
    for (int i = 0; i < size(suscriptor); i++)
    {
        if (suscriptor[i] != "")
        {
            mensaje += suscriptor[i] + " - ";
        }
    }
    return mensaje;
}

// ------------------------------

// Se crea un objeto a la clase Abstracta
// Abstracta objeto;
// Como la clase es abstracta, no se pueden fabricar objetos a partir de ella
// objeto.adicionarSuscriptor();

// Cómo la clase abstracta tiene funciones virtuales puras, entonces se deben implementar los métodos en las clases derivadas o sublases

// Polimorfismo en compilación

// Método adicionarSuscriptor sin parámetro de entrada
string Juegos::adicionarSuscriptor()
{
    int contador = 0;

    for (int i = 0; i < size(suscriptor); i++)
    {
        if (suscriptor[i] != "")
        {
            contador = contador + 1;
        }
    }
    // Se adiciona un elemento al vector
    suscriptor[contador] = "luisa AS-J";
    return mostrarSuscriptor();
}

// Método adicionarSuscriptor con un parámetro de entrada
string Juegos::adicionarSuscriptor(string nombre)
{
    int contador = 0;

    for (int i = 0; i < size(suscriptor); i++)
    {
        if (suscriptor[i] != "")
        {
            contador = contador + 1;
        }
    }
    // Se adiciona el parámetro de entrada al vector
    suscriptor[contador] = nombre;
    return mostrarSuscriptor();
}