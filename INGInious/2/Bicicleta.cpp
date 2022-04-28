#include <iostream>
#include <string>
#include "Bicicleta.h"
using namespace std;  

/*

Propósito: Inicializar un objeto del tipo bicicleta.
Prototipo: Bicicleta nombre_Objeto
Ejemplos: 
Bicicleta myBike

*/

Bicicleta::Bicicleta(string marca)
{  // Clase constructora
   // marca = marcaIntroducida
    this -> marca = marca; // Para no confundirse con el argumento, this hace referencia a la marca del propio objeto
}


Bicicleta::~Bicicleta(){ // Destructor de clase

}

/*

Propósito: Imprimir que la bicicleta esta pinchada.
Contrato:  () -> string
Prototipo: objeto_Bicicleta.pinchar()
Ejemplos: 
myBike.pinchar()

*/

void Bicicleta::pinchar()
{
    cout << "La bicicleta está pinchada" << endl;
}

/*

Propósito: Imprimir que la bicicleta esta despinchada.
Contrato:  () -> string
Prototipo: objeto_Bicicleta.despinchar()
Ejemplos: 
myBike.despinchar()

*/

void Bicicleta::despinchar()
{
    cout << "Se puede usar la bicicleta nuevamente. Ya está despinchada" << endl;
}
