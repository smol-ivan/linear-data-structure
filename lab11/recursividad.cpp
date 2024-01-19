#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/**
 Devuelve true si la secuencia de letras entre los índices i y j del string S es un palíndromo, false en caso contrario.
 */
bool esPalindromo(string S, int i, int j) {
    if (i >= j) return true;
    if (S[i] == S[j]) return esPalindromo(S, i+1, j+1);
    return false;
}


/*
 Invierte el contenido del arreglo de enteros A entre los índices i y j.
 */
void invertir(int A[], int i, int j) {
    if (i < j){
        if(A[i] != A[j]) {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        invertir(A, i+1, j+1);
    }
}


/*
 Toma un string S de longitud n y produzca su inverso a partir del índice i.
 */
void invertirString(string &S, int i, int n) {
    // implementar
}


/*
 Suma los elementos del arreglo A entre los índices i y j.
 */
int sumar(int A[], int i, int j) {
    // implementar
    return 0;
}


/*
 Encuentra y devuelve el elemento máximo en el arreglo A entre los índices i y j.
 */
int maximo(int A[], int i, int j) {
    // implementar
    return 0;
}


/*
 Convierte un string S de dígitos, a partir del dígito en la posición i, en el entero que representa.
 */
int str2int(string S, int i) {
    // implementar
    return 0;
}

void intercambiar(int& a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

void sort(int A[], int i, int j) {
    if (i >= j) return;
    if (A[j] % 2 == 0) {
        if (A[i] % 2 == 0) {
            while (A[i] % 2 == 0) i++;
        }
        intercambiar(A[i], A[j]);
        sort(A, i+1, j-1);
    }
    else {
        sort(A, i, j-1);
    }

}


int main(int argc, char const *argv[])
{

    int A[] = {0,1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl;

    sort(A, 0, sizeof(A) / sizeof(A[0]) - 1);

    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl;
    
	return EXIT_SUCCESS;
}