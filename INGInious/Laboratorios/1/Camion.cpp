/*

                 *´¨) 
                ¸.•´ ¸.•´¸.•*´¨) ¸.•*¨) 
                (¸.•´ (¸.•` ¤ 𝕭𝖗𝖆𝖓𝖉𝖔𝖓 𝕮𝖆𝖑𝖉𝖊𝖗𝖔𝖓 𝕻𝖗𝖎𝖊𝖙𝖔  
       .---.         
      /     \   𝖈𝖆𝖑𝖉𝖊𝖗𝖔𝖓.𝖇𝖗𝖆𝖓𝖉𝖔𝖓@𝖈𝖔𝖗𝖗𝖊𝖔𝖚𝖓𝖎𝖛𝖆𝖑𝖑𝖊.𝖊𝖉𝖚.𝖈𝖔      
      \.@-@./               
      /`\_/`\               202125974
     //  _  \\        
    | \     )|_        𝕴𝖓𝖌𝖊𝖓𝖎𝖊𝖗𝖎𝖆 𝖉𝖊 𝖘𝖎𝖘𝖙𝖊𝖒𝖆𝖘
   /`\_`>  <_/ \
   \__/'---'\__/         ３／１２／２０２１

*/ 

#include "Camion.h"
#include <string>
using namespace std;

/*

Propósito: Inicializar un objeto del tipo camion.
Prototipo: Camion nombre_Objeto(string,int)
Ejemplos: 
Camion unCamion("ABC-001", 10000)

*/

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
    placa = laPlaca;  
    capacidadMaxima = laCapacidadMaxima;   
    pesoCargardo = 0; 
}

/*

Propósito: Destructor de la clase.

*/

Camion::~Camion()
{

}

/*

Propósito: Saber si un objeto se puede cargar en un camion.
Prototipo: nombre_Objeto.cargarUnObjeto(int numero)
Contrato:  (numero) -> bool
Ejemplos: 
unCamion.cargarUnObjeto(10000)

*/

bool Camion::cargarUnObjeto(int pesoDelObjeto) {
    if (pesoCargardo + pesoDelObjeto <= capacidadMaxima) {
        pesoCargardo += pesoDelObjeto;
    return true; // Lógicamente si el peso actual mas el del objeto no excece la capacidad, es posible cargarlo
    } else { 
    return false;
    }
}

/*

Propósito: Ver con que peso se hizo la mudanza.
Prototipo: nombre_Objeto.hacerMudanza()
Contrato:  () -> int
Ejemplos: 
unCamion.hacerMudanza()

*/

int Camion::hacerMudanza() {  
    return pesoCargardo; 
} 

/*

Proposito: Ver cual es la placa de un objeto camion.
Prototipo: nombre_Objeto.cualEsLaPlaca()
Contrato:  () -> string
Ejemplos: 
unCamion.cualEsLaPlaca

*/

string Camion::cualEsLaPlaca() {  
    return placa; 
}

