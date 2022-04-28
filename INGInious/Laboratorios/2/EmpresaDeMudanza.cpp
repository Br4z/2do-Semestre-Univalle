/*
    Archivo: Camion.cpp
    Autores: 
    Getial Getial Juan Sebastian
    <getial.juan@correounivalle.edu.co>
    Calderon Prieto Brandon
    <bcalderonprieto@gmail.com>
    Huertas Cadavid Nicolas Fernando
    <nicolas.huertas@correounivalle.edu.co>
    Cordoba Collazos Angie Natalia
    <natalia8cordoba1908@gmail.com>
    Fecha Creación: 2022-01-28
    Fecha Ultima Modificación: 2022-01-28
    Licencia: GNU-GPL
*/

#include "EmpresaDeMudanza.h"

/*

Propósito: Inicializar un objeto del tipo EmpresaDeMudanza.
Prototipo: EmpresaDeMudanza nombre_Objeto(string,string)
Ejemplos: 
EmpresaDeMudanza Empresa(Empresa,800.197.268-4)

*/

EmpresaDeMudanza::EmpresaDeMudanza(string _nombre,string _nit){

    nombre = _nombre;
    nit = _nit;
}

EmpresaDeMudanza::~EmpresaDeMudanza(){

}

/*

Propósito: "Comprar un camion", añadiéndolo a su flota (vector).
Prototipo: nombre_Objeto.comprarCamion(string, int)
Ejemplos: 
nombre_Objeto.comprarCamion("YUI-988", 10000)

*/

void EmpresaDeMudanza::comprarCamion(string placa,int peso)
{
    Camion comprado(placa,peso);
    camiones.push_back(comprado);
}

/*

Propósito: Cargar los camiones.
Prototipo: nombre_Objeto.cargarLosCamiones(vector)
Ejemplos: 
nombre_Objeto.cargarLosCamiones(objetos)

*/

int EmpresaDeMudanza::cargarLosCamiones(vector<int> objetos)
{
    int aux = 0;
    for(int i = 0;i < objetos.size();i++)
    {
        for(int j = 0; j < camiones.size(); j++)
        {
            if(camiones[j].cargarUnObjeto(objetos[i]))
            {
            aux += objetos[i];
            break;
            }
        }
    }
    return aux;
}


// int EmpresaDeMudanza::cargarLosCamiones(vector<int> objetos) Solución recorriendo primero camiones (copiando objetos y eliminando cargardos)
// {
//     int pesoCamiones = 0, recorridosDelFor = 0;
//     vector <int> auxiliar = objetos;

//     for(int i = 0; i < camiones.size(); i++)
//     {
//         for(int j = 0; j < auxiliar.size(); j++)
//         {
//             recorridosDelFor++;
//             if(camiones[i].cargarUnObjeto(auxiliar[j]))
//             {
//                 pesoCamiones += auxiliar[j];

//                 // for(int k = 0; k < auxiliar.size(); k++) cout << auxiliar[k] << " " ;
//                 // cout << " " << j << endl;                
//                 auxiliar.erase(auxiliar.begin() + j); // Si lo puede cargar que lo elimine de el auxiliar de objetos.

//                 j = -1; // -1 porque el ciclo hace un j++ y quiero que empiece en cero con el vector "nuevo" (despues del erase)
//             }      
//         }
//     }
//     cout << recorridosDelFor << endl;
//     return pesoCamiones;

/* void EmpresaDeMudanza::pesoCamiones()
{
    for(int i = 0; i < camiones.size(); i++)
    {
        cout << camiones[i].hacerMudanza()<<endl;
    }
}
*/