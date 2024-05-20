// Escribir un programa que pida al usuario un número y muestre su tabla de multiplicar utilizando un bucle for.

#include <iostream>
using namespace std;
int main()
{
    int rt, a;
    cout << "ingresa un numero: \n";
    cin >> rt;
    for(a=1; a<=10; a++){
        cout << "el resultado de " << rt << "x" << a << " es igual a= " << rt * a << endl;
    }
    cout << "programa finalizado..." << endl;
    return 0;
}

