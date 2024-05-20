//  Escribir un programa que pida al usuario un número y determine si es primo o no utilizando un bucle while.

#include <iostream>
using namespace std;

int main() {
    int rt, a = 1, b = 0;
    cout << "Ingresa un numero para saber si es primo: ";
    cin >> rt;

    while (a <= rt) {
        if (rt % a == 0) {
            b = b + 1;
        }
        a = a + 1;
    }

    if (b == 2) {
        cout << rt << " es un numero primo" << endl;
    }
    else {
        cout << rt << " no es un numero primo" << endl;
    }

    return 0;
}
