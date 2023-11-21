#include <iostream>

/*
Escribe una función en C++ que tome un arreglo de valores int y determine si hay
un par de números en el arreglo cuyo producto es par.
*/

bool ProductoPar(int arreglo[], int longitud)
{
  for (int i = 0; i < longitud - 1; ++i)
  {
    for (int j = i + 1; j < longitud; ++j)
    {
      int producto = arreglo[i] * arreglo[j];
      if (producto % 2 == 0)
      {
        std::cout << "Se encontro un par de numeros :" << producto;
        return true;
      }
    }
  }
  std::cout << "No se encontro un par de numeros";
  return false;
}

int main()
{
  int arreglo[] = {1, 2, 3, 4, 5, 6};
  int longitud = sizeof(arreglo);

  ProductoPar(arreglo, longitud);

  return 0;
}
