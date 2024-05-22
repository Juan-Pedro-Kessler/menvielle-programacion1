/*Escribir un programa que complete una matriz de 10x10 con el número 1 para los índices que 
se encuentren por encima de la diagonal principal y con 0 los que estén por debajo. Los 
valores de la diagonal principal deben ir en forma descendente desde el 10 hasta el 1.*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, matriz[10][10], a = 1;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i == j) { matriz[i][j] = a; a++; }
            if (i > j) { matriz[i][j] = 0; }
            if (i < j) { matriz[i][j] = 1; }
        }
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl<<endl;
    }

}