#pragma once

#include <string>

class Nodo
{
public:
    Nodo(std::string nombre);
    std::string GetNombre() { return _nombre; }
    void SetNombre(std::string nombre) { _nombre = nombre; }
    Nodo* GetSiguiente() { return _siguiente; }
    void SetSiguiente(Nodo* siguiente) { _siguiente = siguiente; }

private:
    std::string _nombre;
    Nodo* _siguiente;

};
