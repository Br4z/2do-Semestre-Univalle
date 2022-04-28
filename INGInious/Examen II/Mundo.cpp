/*
    Archivo: Mundo.cpp
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "Mundo.h"

Mundo::Mundo(string name)
{
    this->name = name;
}

Mundo::~Mundo()
{
}

void Mundo::setEjercitos(vector<Personaje *> ejercito1, vector<Personaje *> ejercito2)
{
    for (int i = 0; i < ejercito1.size(); i++)
    {
        magicBattle.addSoldado(ejercito1[i], 1);
    }

    for (int i = 0; i < ejercito2.size(); i++)
    {
        magicBattle.addSoldado(ejercito2[i], 2);
    }
}

void Mundo::startConfrontation()
{
    int ejercito1Size = magicBattle.getNumeroSoldados(1);
    int ejercito2Size = magicBattle.getNumeroSoldados(2);

    cout << "Ejercito 1 empieza con " + to_string(ejercito1Size) + " Arqueros" << endl;
    cout << "Ejercito 1 empieza con " + to_string(ejercito1Size) + " Draconaurius" << endl;

    vector <Personaje *> ejercito1 = magicBattle.getSoldados(1);
    vector <Personaje *> ejercito2 = magicBattle.getSoldados(2);

    for (int i = 0; i < ejercito1Size; i++)
    {
        Personaje &personajeEjercito1 = *(ejercito1[i]); // Accedemos al objeto

        for (int j = 0; j < ejercito2Size; j++)
        {
            Personaje &personajeEjercito2 = *(ejercito2[j]); // Accedemos al objeto

            if(personajeEjercito2.getLife() >= 0) // Solo habrá confrontaciones entre personajes vivos
            {
                magicBattle.confrontation(personajeEjercito1, personajeEjercito2); // Ese metodo espera los propios datos (para usar referencia)
            }
            
            if (personajeEjercito1.getLife() <= 0) break; // Si despues de ataca el atacante muere
        }

        if(magicBattle.isALooser(ejercito2))
        {
            cout << "Ejercito 1 gano,quedan con " + to_string(magicBattle.getSoldadosVivos(ejercito1)) + " Arqueros" << endl;
            break;
        }else if (magicBattle.isALooser(ejercito1))
        {
            cout << "Ejercito 2 gano,quedan con " + to_string(magicBattle.getSoldadosVivos(ejercito2)) + " Draconaurius" << endl;
            break;
        }
        
    }
}
