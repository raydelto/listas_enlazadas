#pragma once 

#include "Nodo.h"

class Lista
{
public:
    Lista();
    Nodo* GetPrimer() { return _primer; }
    void Agregar(Nodo* nodo);

private:
    Nodo* _primer;
    Nodo* _ultimo;

};
