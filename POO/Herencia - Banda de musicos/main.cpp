/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2014 vbucheli <vbucheli@Blue-Ant>
 *
 * BandaMusicos is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * BandaMusicos is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Musico.h"
#include "Cantante.h"
#include "Espectador.h"
#include "Rapero.h"
#include "Mariachi.h"

int main()
{

    try
    {

        // 1. Instanciar un objeto con "" , por ejemplo:

        // Persona persona("");
        // Persona persona("Belle");
        // persona.imprimir(cout);

        // 2. Instanciar al músico santana , Set instrumento e Imprimir, por ejemplo:
        Musico Santana("Santana");
        // Santana.setInstrumento("Guitarra");
        // Santana.imprimir(cout);

        // 3. Instanciar a la persona santana , Set instrumento e Imprimir, por ejemplo:
        // Persona Santana("Santana");
        // Santana.setInstrumento("Guitarra");
        // Santana.imprimir(cout);

        // 4. Instanciar a la cantante shakira y su nombre artisitco , pruebe Set instrumento, setcantaBien e Imprimir , por ejemplo:
        Cantante Shakira("Shakira Mebarak");
        // Shakira.setcantaBien(false);
        // Shakira.setnombreArtistico("Shakira");
        // Shakira.imprimir(cout);

        // 5. incluya la edad para el musico y el cantante como un método set imprimalo.

        // Shakira.setEdad(28);
        // Santana.setEdad(40);
        // cout << endl;
        // Shakira.imprimir(cout);
        // cout << endl;
        // Santana.imprimir(cout);

        // 6. Implemente una nueva funcionalidad en la clase musico que toca varios instrumentos, la propiedad es un entero que dice cuántos instrumentos toca, utilice el nuevo método en la clase muscio int cuantas_instrumentos() const throw(); //
        // Nueva función

        //  Musico KurtCobainn("Kurt");
        //  KurtCobainn.setInstrumento("Guitarra");
        //  KurtCobainn.setCantInstrumento(3);
        //  KurtCobainn.imprimir(cout);

        // 8. Implemente la clase espectador que hereda de persona que le gusta o no la banda

        // Espectador Rojas("Rojas");
        // Rojas.setGustarBanda(true);
        // Rojas.imprimir(cout);

        // cout << endl;

        // Cantante *puntero=new Cantante("Artista");
        // delete puntero;
        // puntero=0;
        // puntero = new Rapero("Lina");
        // puntero->cantar();

        // Cantante *puntero1=new Mariachi("Artista2");
        // delete puntero;
        // puntero1=0;
        // puntero1= new Mariachi("Julián");
        // puntero1->cantar();
    }

    catch (int &codigo)
    {
        cout << "Error " << codigo << " Al instaciar el objeto o definir las propiedades del objeto" << endl;
    }
    catch (exception &e)
    {
        cout << "Error interno: " << e.what() << endl;
    }
    catch (...)
    {
        cout << "Error interno. Será corregido en la próxima versión de la aplicación" << endl;
    }
}
