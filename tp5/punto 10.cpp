#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int n = 5;
    int i, j, rt;
    int matrix[n][n];

    // Rellenar la matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                cout << "Elige un numero para ese espacio: ";
                cin >> rt;
                matrix[i][j] = rt;
            }
            else {
                matrix[i][j] = -1; // Usar -1 para marcar espacios no inicializados
            }
        }
    }

    // Mostrar la matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == -1) {
                cout << 'x' << "\t"; // Mostrar 'x' para los espacios no inicializados
            }
            else {
                cout << matrix[i][j] << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
