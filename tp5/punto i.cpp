#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int i = 0, j = 0, a = 0, rt, matriz[10][10], arreglo[10], total = 0;
    char opc = 'y';
    bool d = false;
    srand(time(0));


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 99 + 1;
        }
    }


    for (i = 0; i < 10; i++) {
        total = 0;  
        for (j = 0; j < 10; j++) {
            total += matriz[i][j];
        }
        arreglo[i] = total;
    }

 
    for (a = 0; a < 10; a++) {
        cout << "Suma de la fila " << a + 1 << ": " << arreglo[a] << endl;
    }


    cout << "Contenido de la matriz:" << endl;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    while (opc == 'y') {
        cout << "¿Qué número deseas buscar?\n";
        cin >> rt;

        d = false; 

        for (i = 0; i < 10 && !d; i++) {
            for (j = 0; j < 10 && !d; j++) {
                if (rt == matriz[i][j]) {
                    d = true;
                    break;
                }
            }
        }

        if (d) {
            cout << "El número se encuentra en la matriz\n";
        }
        else {
            cout << "El número NO se encuentra en la matriz\n";
        }

        cout << "¿Deseas reintentar con otro número? (y/n)\n";
        cin >> opc;
    }

    return 0;
}
