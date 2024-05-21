/*Hacer un programa en C++, que lea una letra y diga si es una vocal. */
#include <iostream>
using namespace std;
int main()
{
    char intento;
    cout << "ingresa una letra para saber si es vocal\n";
    cin >> intento;
    switch (intento) {
    case 'A':
    case 'a':
        cout << "es vocal\n";
        break;
    case 'E':
    case 'e':
        cout << "es vocal\n";
        break;
    case 'I':
    case 'i':
        cout << "es vocal\n";
        break;
    case 'O':
    case 'o':
        cout << "es vocal\n";
        break;
    case 'U':
    case 'u':
        cout << "es vocal\n";
        break;
    default:
        cout << "no es vocal\n";
        break;
    }
}


