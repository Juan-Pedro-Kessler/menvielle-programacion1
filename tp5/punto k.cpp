/*Escribe un programa donde la cantidad de filas y columnas de la matriz estén definidas por 
constantes distintas. Luego, completa los elementos de la matriz siguiendo estas reglas: si la 
suma de los índices de un lugar es par, ese lugar se llenará con la raíz cuadrada de la suma de 
los índices. En caso de que la suma de los índices sea impar, ese lugar se llenará con un valor 
de 0*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int a = 4, b = 6;
    int matriz[a][b];

    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matriz[i][j] = i + j + 2;
        }
    }

    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (matriz[i][j] % 2 == 0) {
                cout << sqrt(matriz[i][j]);
            }
            else {
                cout << "0";
            }
            cout << "\t";
        }
        cout << endl;
    }

    return 0;
}
