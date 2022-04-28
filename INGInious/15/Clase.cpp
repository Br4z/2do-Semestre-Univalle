/*
    Archivo: Clase.cpp
    Autor: Brandon Calderon Prieto <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-01-24
    Fecha última modificación: 2022-01-24
    Versión: 0.1
    Licencia: GNU-GPL
*/

#include <iostream>
#include <string> 
#include "Clase.h"
using namespace std;

/*

Propósito: Inicializar un objeto del tipo clase.
Prototipo: Clase nombre_Objeto
Ejemplos: 
Clase frase

*/

Clase::Clase()
{

}

Clase::~Clase(){

}

/*

Propósito: Contar las vocales que tiene un string.
Prototipo: nombre_Objeto.getVocales(string *sentence) // Tiene que recibir una dirección de memoria para identificar el objeto
Contrato:  (*string) -> int
Ejemplos: 
miString.getVocales("Hola como estas")

*/

void Clase::getVocales(string *sentence){
    
    int contador = 0;
    for(int i = 0; i < (*sentence).size(); i++){  // Lo agrupo en parentesis para que el * solo apunte al dato y no haya error.
        if((*sentence)[i] == 'a' or (*sentence)[i] == 'e' or (*sentence)[i] == 'i' or (*sentence)[i] == 'o' or (*sentence)[i] == 'u'){
            contador++;
        }
    }
    cout << contador << endl;
}









