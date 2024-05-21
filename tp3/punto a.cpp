/*Hacer un programa en C++, que diga si un número es par o impar. */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<"ingresa tu numero para saber si es impar\n";
    cin >> num;
    if (num % 2 == 0) { cout << "el numero es par\n"; }
    else { cout << "el numero es impar\n"; }
}

