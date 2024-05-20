// Escribir un programa que calcule el factorial de un número utilizando un bucle for.

#include <iostream>
using namespace std;
int main()
{
    int total, rt, a, b;
    cout << "Ingresa un numero para ver su factorial\n";
    cin >> rt;
    b = rt;
    total = rt;
    for (a = 1; a <rt; a++) {
        total = total * a;
    }
    cout << "el factorial de " << b << " es igual a: " << total;
}