#include <string>

#include "nodo_c.h"

class ListaLigadaC
{
public:
    ListaLigadaC();
    ~ListaLigadaC();
    void insertar(const Elem e);
    void eliminar();
    void avanzar();
    Elem cola() const;
    Elem frente() const;
    bool esVacia() const;

private:
    NodoC *cursor;
    friend std::ostream &operator<<(std::ostream &, const ListaLigadaC &);
};

ListaLigadaC::ListaLigadaC()
    : cursor(NULL) {}

/*
 Libera la memoria ocupada por todos los nodos de la lista.
 */
ListaLigadaC::~ListaLigadaC()
{
    while (!esVacia())
    {
        eliminar();
    }
}

void ListaLigadaC::insertar(const Elem e)
{
    NodoC *p = new NodoC();
    p->elem = e;
    if (esVacia())
    {
        p->siguiente = p;
        cursor = p;
    }
    p->siguiente = cursor->siguiente;
    cursor->siguiente = p;
}

void ListaLigadaC::eliminar()
{
    NodoC *p = cursor->siguiente;
    if (p == cursor)
    {
        cursor = NULL;
    }
    else
    {
        cursor->siguiente = cursor->siguiente->siguiente;
    }
    delete p;
}

void ListaLigadaC::avanzar()
{
    cursor = cursor->siguiente;
}

Elem ListaLigadaC::cola() const
{
    return cursor->elem;
}

Elem ListaLigadaC::frente() const
{
    return cursor->siguiente->elem;
}

bool ListaLigadaC::esVacia() const
{
    return cursor == NULL;
}

std::ostream &operator<<(std::ostream &strm, const ListaLigadaC &lista)
{
    std::string elem = "";
    NodoC *aux = lista.cursor;

    if (aux != NULL)
    {
        while (aux->siguiente != lista.cursor)
        {
            elem += aux->siguiente->elem + ", ";
            aux = aux->siguiente;
        }
        elem += aux->siguiente->elem;
    }
    return strm << "(" << elem << "*)";
}