/*Dado un arreglo de tamaño N=16 cargado aleatoriamente. Copiar sus valores en una matriz 
de 4x4*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int n = 16, m = 4;
    int arreglo[n], matriz[m][m], c = -1;
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            c++;
            matriz[i][j] = arreglo[c];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n \n";
    }

    return 0;
}
