//Escribir un programa que pida al usuario una palabra y muestre sus letras una por una utilizando un bucle while.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string palabra;
    int a, b = 0;
    cout << "ingrese su palabra \n";
    cin >> palabra;
    a = palabra.size();
    while (b < a) {
        cout << "El caracter " << b + 1 << " es " << palabra[b] << endl;
        b++;
    }
    return 0;
}
