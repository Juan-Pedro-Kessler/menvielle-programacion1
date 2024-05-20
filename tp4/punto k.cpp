/*Escribir un programa que solicite al usuario ingresar un número entero positivo y luego
imprima en la consola una matriz cuadrada con la diagonal principal compuesta por números
en forma ascendente hasta ese valor y los demás elementos de la matriz iguales a cero.*/  
#include <iostream>
using namespace std;
int main()
{
    int a, b, c=1, rt;
    cout << "ingresa el orden de la matriz escalar\n";
    cin >> rt;
    cout << endl << endl;
    for (a = 0; a < rt; a++) {
        for (b = 0; b < rt; b++) {
            if (a == b) {
                cout << c << "\t";
                c++;
            }
            else { cout << "0\t";}
        }
        cout << endl;
    }
}

