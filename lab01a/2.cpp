#include <iostream>
#include <cstdlib>

/*
Escribe una función en C++ que tome un arreglo que contiene el conjunto de todos los enteros en el rango de 1 a 52 y los revuelva en orden aleatorio. Usa la función rand incorporada en C++, que devuelve un entero pseudoaleatorio cada vez que se llama. Tu función debería generar cada orden posible con la misma probabilidad.
*/

void Revolver(int arreglo[], int longitud)
{
    for (int i = longitud - 1; i > 0; --i)
    {
        int j = std::rand() % (i + 1);

        int temp = arreglo[i];
        arreglo[i] = arreglo[j];
        arreglo[j] = temp;
    }
}

int main()
{
    const int longitud = 52;
    int arreglo[longitud];

    for (int i = 0; i < longitud; ++i)
    {
        arreglo[i] = i + 1;
    }

    Revolver(arreglo, longitud);

    std::cout << "Arreglo mezclado: ";
    for (int i = 0; i < longitud; ++i)
    {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}