/*Cargar una matriz de NxM con valores aleatorios entre [1,100] y comprobar si existen valores 
repetidos.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 4, m = 6;
    int matriz[n][m];
    bool esta = false;

    srand(time(NULL));

    // Generar la matriz con valores aleatorios entre 1 y 100
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++) {
            matriz[a][b] = rand() % 100 + 1;
        }
    }

    // Imprimir la matriz generada
    cout << "Matriz generada:" << endl;
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++) {
            cout << matriz[a][b] << "\t";
        }
        cout << endl << endl;
    }

    // Comprobar si existen valores repetidos
    for (int i = 0; i < n && !esta; ++i) {
        for (int j = 0; j < m && !esta; ++j) {
            for (int k = 0; k < n && !esta; ++k) {
                for (int l = 0; l < m && !esta; ++l) {
                    if ((i != k || j != l) && matriz[i][j] == matriz[k][l]) {
                        esta = true;
                    }
                }
            }
        }
    }

    if (esta) {
        cout << "Existen valores repetidos en la matriz." << endl;
    }
    else {
        cout << "No existen valores repetidos en la matriz." << endl;
    }

    return 0;
}
