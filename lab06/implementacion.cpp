#include <iostream>
#include <string>

#include "pila.h"

void decToBinary(int n) 
{ 
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            std::cout << "1"; 
        else
            std::cout << "0"; 
    } 
} 

int main() {
    // Pila<int> pila;

    // pila.push(1);
    // pila.push(2);
    // pila.push(3);
    
    // while (!pila.esVacia())
    // {
    //     std::cout << pila.top() << std::endl
    //     pila.pop()
    // }
    decToBinary(7);
    

    return EXIT_SUCCESS;
}
