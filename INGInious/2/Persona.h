#ifndef Persona_H
#define Persona_H
#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
    string nombre;  // El único dato inaccesible fuera de esta clase sera el nombre

public: // Pondremos los metodos

    Persona(string); // Crear el objeto 
    void comprar(); // Puede comprar una bicicleta
    void recorrer(float); // Puede recorrer un numero real de distancia
    void prestar(string); // Puede prestar la bicicleta a una persona con un nombre
    void devolver(string);  // Puede devolder la bicicleta a una persona con un nombre
    void despinchar(); // Puede despinchar la bicicleta
};
#endif