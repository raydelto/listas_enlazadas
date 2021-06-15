#include "Lista.h"

Lista::Lista(): _primer(nullptr), _ultimo(nullptr)
{
}

void Lista::Agregar(Nodo* elemento)
{
    if(_primer == nullptr) //Si la lista está vacía
    {
        _primer = elemento;
        _ultimo = elemento;
    }
    else //Si la lista NO está vacía
    {
        _ultimo->SetSiguiente(elemento);
        _ultimo = elemento;
    }
}
