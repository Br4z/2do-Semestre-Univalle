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

/**
    HISTORIA: Hacer una mudanza en dos camiones (una clase y dos objetos): Vamos a modelar un camión para transportar mis objetos, que tienen distintos pesos. El camión tiene un número de placa y una capacidad máxima. Si se supera esa capacidad, 
    el programa me avisará, para que el objeto que intento subir lo guarde en el otro camión.
*/

#include <iostream>
#include "Camion.h"
using namespace std;

int main()
{
    Camion unCamion("ABC-001", 10000);
    Camion otroCamion("DEF-002", 5000);

    int objetos[8] ={ 1000, 3000, 5000, 2000, 500, 1800, 4000, 30 };

    for (int cualObjeto = 0; cualObjeto < 8; cualObjeto++)
    {
        int objetoATransportar = objetos[cualObjeto];
        if(not unCamion.cargarUnObjeto(objetoATransportar))
        {
            if(not otroCamion.cargarUnObjeto(objetoATransportar))
            {
            cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
            }
        }   
    }

    cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.hacerMudanza() << " kg." << endl;
    cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.hacerMudanza() << " kg." << endl;

    return 0;
}