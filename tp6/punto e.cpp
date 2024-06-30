/*Crea una función que tome dos matrices cuadradas y almacene su suma en una tercera matriz.*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void llenar(int m1[][3], int m2[][3], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m1[i][j] = rand() % 100 + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m2[i][j] = rand() % 100 + 1;
        }
    }
}
void sumar(int m1[][3], int m2[][3], int m3[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m3[i][j] = m1[i][j]+m2[i][j];
        }
    }
}
void mostrar(int m1[][3], int m2[][3], int m3[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "la suma de " << m1[i][j] << "+" << m2[i][j] << " es igual a: " << m3[i][j] << endl;
        }
    }
}
int main()
{
    const int n = 3;
    int m1[n][n], m2[n][n], m3[n][n];
    llenar(m1, m2, n);
    sumar(m1, m2, m3, n);
    mostrar(m1, m2, m3, n);
    return 0;
}

