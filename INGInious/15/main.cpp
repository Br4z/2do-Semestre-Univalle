/*
    Archivo: main.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-23
    Fecha última modificación: 2022-01-23
    Versión: 0.1
    Licencia: GNU-GPL
*/

/**
    HISTORIA:  Programa que reciba la dirección de inicio de una cadena de caracteres y devuelva el número de 
    vocales que hay en la cadena.
*/

#include <iostream>
#include <string>
#include "Clase.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() {

    Clase frase;
    string sentence;
    string *referenciaSentence = &sentence; 


    getline(cin,sentence);
    

    frase.getVocales(referenciaSentence);

    return 0;
}