#include <iostream>
#include <string>

#include "lista_ligada.h"

void Interseccion(const Lista &lista1, const Lista &lista2)
{
  Lista resultado;

  Nodo *p1 = lista1.primera();
  while (p1 != NULL)
  {
    int elemento1 = lista1.obtener(p1);

    Nodo *p2 = lista2.primera();
    while (p2 != NULL)
    {
      int elemento2 = lista2.obtener(p2);

      if (elemento1 == elemento2)
      {
        resultado.insertar(elemento1, resultado.fin());
        break;
      }

      p2 = lista2.siguiente(p2);
    }

    p1 = lista1.siguiente(p1);
  }
  std::cout << "Interseccion" << resultado << std::endl;
}

void Union(const Lista &lista1, const Lista &lista2)
{
  Lista resultado = lista1;

  Nodo *p = lista2.primera();
  while (p != NULL)
  {
    int elemento = lista2.obtener(p);

    if (resultado.buscar(elemento) == NULL)
    {
      resultado.insertar(elemento, resultado.fin());
    }

    p = lista2.siguiente(p);
  }

  std::cout << "Union" << resultado << std::endl;
}

int main()
{
  Lista l1;
  for (int i = 1; i <= 5; i++)
    l1.insertar(i, NULL);

  l1.eliminar(l1.buscar(2));
  l1.eliminar(l1.buscar(4));

  Lista l2;
  for (int i = 1; i <= 5; i++)
    l2.insertar(i, NULL);

  l2.eliminar(l2.buscar(3));
  l2.eliminar(l2.buscar(5));

  std::cout << l2 << std::endl;
  std::cout << l1 << std::endl;

  Interseccion(l1, l2);
  Union(l1, l2);

  return EXIT_SUCCESS;
}
