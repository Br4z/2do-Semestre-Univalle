/*
    Archivo: Batalla.cpp
    Autor: Brandon Calderon Prieto
    <calderon.brandon@correounivalle.edu.co>
    Fecha creación: 2022-03-18
    Fecha última modificación: 2022-03-18
    Versión: 0.1
    Licencia: GNU-GPL
*/
#include "Batalla.h"

Batalla::Batalla()
{

}

Batalla::~Batalla()
{
    // Un for por cada ejercito
    for (Personaje *personaje : ejercito1)
    {
        delete personaje;
        personaje = nullptr;
    }

    for (Personaje *personaje : ejercito2)
    {
        delete personaje;
        personaje = nullptr;
    }
}

int Batalla::getNumeroSoldados(int ejercito)
{
    if (ejercito == 1)
    {
        return ejercito1.size();
    }
    else
    {
        return ejercito2.size();
    }
}

vector<Personaje *> Batalla::getSoldados(int ejercito)
{
    if (ejercito == 1)
    {
        return ejercito1;
    }
    else
    {
        return ejercito2;
    }
}

void Batalla::addSoldado(Personaje *soldado, int ejercito) // Recordemos que los vectores ejercito solo reciben punteros de personajes
{
    if (ejercito == 1)
    {
        ejercito1.push_back(soldado);
    }
    else
    { // Como los ingresos van a ser desde el main la otra opción si o si es en segundo ejercito
        ejercito2.push_back(soldado);
    }
}

void Batalla::confrontation(Personaje &soldado1, Personaje &soldado2)
{
    cout << "El " << soldado1.getName() << " ha atacado al " << soldado2.getName() << endl;

    if (soldado1.getLife() >= 0) // un soldado solo puede atacar si tiene vida
    {
        soldado1.atack(soldado2); // La verificación en la otra dirección lo hace el metodo de startConfrontation en mundo
    }
}

bool Batalla::isALooser(vector<Personaje *> ejercito) // Sirve para hacer la comprobación de que ejercito perdió, dado el ejercito
{

    int aux = 0;
    for (int i = 0; i < ejercito.size(); i++)
    {
        if (ejercito[i]->getLife() <= 0)
        {
            aux++;
        }
    }
    if (aux == ejercito.size()) // Si todos los que integran el ejercito tiene una vida igual o menor a cero, significa que ese ejercito perdió
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Batalla::getSoldadosVivos(vector<Personaje *> ejercito)
{
    int vivos = 0;
    for(int i = 0; i < ejercito.size(); i++)
    {   
        int vida = ejercito[i]->getLife();
        if(vida >= 0) vivos++;
    }
    return vivos;
}