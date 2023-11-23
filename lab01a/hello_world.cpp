#include <iostream>
#include <string>

using namespace std;

void Saludar(string nombre, string matricula)
{
    cout << "Hola mundo " << nombre << endl;
    cout << "Tu numero de matricula es: " << matricula << endl;
}

int main()
{
    string nombre = "Ivan";
    string matricula = "2223028708";

    Saludar(nombre, matricula);

    return 0;
}