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
   \__/'---'\__/

*/ 

/*

Utilidad: Familiarizarme con este paradigma de programación.
Historia: Llevamos la historia dos personas que se relacionan con una bicicleta (recorren, la pinchan y 
la prestan).

*/

#include <iostream>
#include "Persona.h"
#include "Bicicleta.h"
using namespace std;

/*

Propósito: Empezar a contar la historia.
Contrato:  () -> "Historia" 
Prototipo: ()

*/

int main() 
{
    Persona juanita("Juanita");
    Persona ana("Ana");
    Bicicleta BMX("BMX"); // Note que BMX es la marca de la bicicleta y el nombre del objeto

    juanita.comprar();
    juanita.recorrer(20);
    juanita.prestar("Ana");
    ana.recorrer(10);
    BMX.pinchar();
    ana.devolver("Juanita");
    juanita.despinchar();
    BMX.despinchar();

    return 0;
}