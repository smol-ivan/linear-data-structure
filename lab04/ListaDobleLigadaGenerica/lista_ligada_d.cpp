#include <iostream>
#include <string>

#include "lista_ligada_generica_d.h"

using namespace std;

int main()
{
    ListaLigadaD<int> lista;

    lista.insertar(1, lista.fin());
    lista.insertar(2, lista.fin());
    lista.insertar(3, lista.fin());

    cout << lista << endl;

    lista.intercambiar(lista.buscar(1), lista.buscar(3));

    cout << lista << endl;

    return EXIT_SUCCESS;
}
