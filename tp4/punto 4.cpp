//Escribir un programa que pida al usuario un número y muestre sus divisores utilizando un bucle for.

#include <iostream>
using namespace std;
int main() {
    int  rt;

    cout << "Ingresa un numero para saber sus divisores: " << endl;
    cin >> rt;

    cout << "Los divisores de " << rt << " son:" << endl;
    for (int a = 1; a <= rt; ++a) {
        if (rt % a == 0) {
            cout << a << "\n";
        }
    }
    return 0;
}
