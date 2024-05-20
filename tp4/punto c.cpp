// Escribir un programa que calcule la suma de los primeros n números naturales utilizando un bucle while.

#include <iostream>
using namespace std;
int main()
{
    int rt=1, suma = 0;

    while (rt !=0){
        cout << "ingresa el numero que deseas sumar(ingrese 0 si desea terminar el programa)\n";
        cin >> rt;
        suma = suma + rt;
    }
    cout << "el resultado de la suma es: " << suma;
}