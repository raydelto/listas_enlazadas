#include <iostream>
#include "Lista.h"

int main()
{
    Lista* lista = new Lista();
    Nodo* cancion1 = new Nodo("Cancion 1");
    Nodo* cancion2 = new Nodo("Cancion 2");
    Nodo* cancion3 = new Nodo("Cancion 3");
    Nodo* cancion4 = new Nodo("Cancion 4");

    lista->Agregar(cancion1);
    lista->Agregar(cancion2);
    lista->Agregar(cancion3);
    lista->Agregar(cancion4);

    Nodo* i = lista->GetPrimer();
    while(i != nullptr)
    {
        std::cout << i->GetNombre() << std::endl;
        i = i->GetSiguiente();
    }


    /* Prueba de la diferencia entre crear objetos en el stack
    * y crear objetos en el heap para acceder a ellos mediante punteros.
    *
    Nodo nodo("Sin Puntero");
    std::cout << "El nombre de nodo sin puntero es " << 
        nodo.GetNombre() << std::endl;


    Nodo* punteroNodo = new Nodo("Con Puntero") ;
    std::cout << "El nombre de nodo con puntero es " << 
        punteroNodo->GetNombre() << std::endl;
    */
    return 0;
}
