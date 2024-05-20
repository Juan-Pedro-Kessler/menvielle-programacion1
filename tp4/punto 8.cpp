//Escribir un programa que calcule la media de una cantidad de números introducidos por teclado do-while.

#include <iostream>
using namespace std;
int main()
{
    int contador = 0, rt;
    float suma = 0;
    do {
        cout << "ingresa un numero(ingrese 0 para terminar)\t";
        cin >> rt;
        suma = suma + rt;
        contador++;
    } 
    while (rt!=0);
    contador--;
    cout << "la media es:\t" << suma / contador;
    return 0;
}

