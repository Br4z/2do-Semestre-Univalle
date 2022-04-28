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

#ifndef Camion_H
#define Camion_H
#include <string>
using namespace std;

/**
    CLASE:      Camion
    INTENCION:  Representar un camion de una empresa de mudanzas.
    RELACIONES: NINGUNA
*/

class Camion
{
// Atributos
private:
    string placa; // Placa del camion,
    int capacidadMaxima, pesoCargardo; // Capacidad maxima que puede soportar para una mudanza y peso cargado

// Metodos
public:
    Camion(string laPlaca, int laCapacidadMaxima); // Constructor de clase
    ~Camion();
    bool cargarUnObjeto(int pesoDelObjeto);  // retorna un bool, para ver si un objeto se puede cargar (interactuá con la capacidad maxima)
    int hacerMudanza();  // Retorna la carga que transportó
    string cualEsLaPlaca(); // Retorna la placa del camion
};
#endif