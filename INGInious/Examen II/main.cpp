
#include "Mundo.h"
#include "Arquero.h"
#include "Draconaurius.h"

int main()
{
    Mundo Jenkins("Jenkins");

    

    vector<Personaje *> ejercito1 = 
    {
        new Arquero(1,  true),
        new Arquero(2,  true),
        new Arquero(3,  false),
        new Arquero(4,  false),
        new Arquero(5,  false),
        new Arquero(6,  false),
        new Arquero(7,  false)

    };

    vector<Personaje *> ejercito2 = 
    {
        new Draconaurius(1, true),
        new Draconaurius(2, true),
        new Draconaurius(3, true),
        new Draconaurius(4, true),
        new Draconaurius(5, true),
        new Draconaurius(6, false),   
        new Draconaurius(7, false)      
    };

    Jenkins.setEjercitos(ejercito1,ejercito2);
    Jenkins.startConfrontation();
}