#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

/*

Propósito: Inicializar un objeto del tipo persona.
Prototipo: Persona nombre_Persona(string)
Ejemplos: 
Persona juanita("Juanita")

*/

Persona::Persona(string name) // Clase constructora
{
    nombre = name;
}

/*

Propósito: Imprimir en pantalla que una persona compro una bicicleta.
Prototipo: nombre_Objeto_Persona.comprar()
Contrato: () -> string
Ejemplos: 
juanita.comprar()

*/

void Persona::comprar()
{
    cout << nombre << " compró bicicleta nueva.\n";
}

/*

Propósito: Imprimir en pantalla que una persona le presto la bicicleta a otra persona.
Prototipo: nombre_Objeto_Persona.prestar(string nombre)
Contrato:  (nombre) -> string
Ejemplos: 
juanita.prestar("Ana")

*/

void Persona::prestar(string persona)
{
    cout << nombre << " le presta su bicicleta a " << persona << endl;
}

/*

Propósito: Imprimir en pantalla cuanta distancia recorrió una persona.
Prototipo: nombre_Objeto_Persona.recorrer(float distancia)
Contrato:  (distancia) -> string
Ejemplos: 
ana.recorrer(10)

*/

void Persona::recorrer(float distancia)
{
    cout << nombre << " recorre "<< distancia << " km.\n";
}

/*

Propósito: Imprimir en pantalla que una persona le devolvió a alguien.
Prototipo: nombre_Objeto_Persona.devolver(string nombre)
Contrato:  (nombre) -> string
Ejemplos: 
ana.devolver("Juanita")

*/

void Persona::devolver(string persona)
{
    cout << nombre << " devuelve la bicicleta a "<< persona << endl;
}

/*

Propósito: Imprimir en pantalla que una persona tiene que despichar su bicicleta.
Prototipo: nombre_Objeto_Persona.despinchar()
Contrato:  () -> string
Ejemplos: 
juanita.despinchar()

*/

void Persona::despinchar()
{
    cout << nombre <<" tiene que despichar su bicicleta" << endl;
}