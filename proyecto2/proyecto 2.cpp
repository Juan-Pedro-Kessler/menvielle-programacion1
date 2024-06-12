#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void aleatoria(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}
void manual(int matriz[3][3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "elegi un numero para el elemento: ";
            cin >> matriz[i][j];
        }
    }
}
void mostrar(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j]<< "\t";
        }
        cout << endl;
    }
}
bool buscar(int matriz[3][3]) {
    int numero;
    bool encontrado = false;
    cout << "ingrese el numero a buscar: ";
    cin >> numero;
    for (int i = 0; i < 3 && encontrado==false; i++) {
        for (int j = 0; j < 3 && encontrado == false; j++) {
            if (numero == matriz[i][j]) {
                encontrado = true;
                cout << "se encuentra en la posicion " << i+1 << " " << j+1<<endl;
            }
            else { encontrado = false; }
        }
    }
    if (encontrado == false) { cout << "el numero no se encontro\n"; }
    return encontrado;
}
int maximo(int matriz[3][3]) {
    int max = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
            }
        }
    }
    cout << "el maximo es: " << max << endl;
    return max;
}
int minimo(int matriz[3][3]) {
    int min = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < min) {
                min = matriz[i][j];
            }
        }
    }
    cout << "el minimo es: " << min << endl;
    return min;
}
void ordenarasc(int matriz[3][3]) {
    int arreglo[9], a=0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arreglo[a] = matriz[i][j];
            a++;
        }
    }
     for (int i = 1; i < 9; ++i) {
        int c = arreglo[i];
        int j = i - 1;

        // Mueve los elementos del arreglo que son mayores que la clave,
        // a una posición adelante de su posición actual.
        while (j >= 0 && arreglo[j] > c) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = c;
    }
     a = 0;
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             matriz[i][j] = arreglo[a];
             a++;
         }
     }
}
void ordenardes(int matriz[3][3]) {
    int arreglo[9], a = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arreglo[a] = matriz[i][j];
            a++;
        }
    }
    for (int i = 1; i < 9; ++i) {
        int c = arreglo[i];
        int j = i - 1;

        // Mueve los elementos del arreglo que son mayores que la clave,
        // a una posición adelante de su posición actual.
        while (j >= 0 && arreglo[j] < c) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = c;
    }
    a = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = arreglo[a];
            a++;
        }
    }
}
int main()
{
    const int n=3;
    int rt = 1, rta, matriz[3][3];
    srand(time(NULL));
    while (rt != 6) {
        cout << "Elija una opcion:\n1-cargar la matriz.\n2-mostrar los valores de matriz.\n3-Buscar un valor especifico ingresado por el usuario dentro de la matriz.\n4-Devolver el valor maximo o minimo de la matriz.\n5-Ordenar los valores de la matriz de forma ascendente o descendente.\n6-Salir del programa.\n";
        cin >> rt;
        switch (rt) {
        case 1:
            cout << "1-cargar de forma aleatoria.\n2-cargar manualmente.\n";
            cin >> rta;
            switch (rta) {
            case 1:
                aleatoria(matriz);
                break;
            case 2:
                manual(matriz);
                break;
            default:
                cout << "pone un valor valido\n";
                break;
            }
            break;
        case 2:
            mostrar(matriz);
            break;
        
        case 3:
            buscar(matriz);
            break;
        
        case 4:
            cout << "1-devolver el maximo.\n2-devolver el minimo\n";
            cin >> rta;
            switch (rta) {
            case 1:
                maximo(matriz);
                break;
            case 2:
                minimo(matriz);
                break;
            default:
                cout << "pone un valor valido\n";
                break;
            }
            break;

        case 5:
            cout << "1-ascendente.\n2-descendente\n";
            cin >> rta;
            switch (rta) {
            case 1:
                ordenarasc(matriz);
                break;
            case 2:
                ordenardes(matriz);
                break;
            }
            break;

        case 6:
            cout << "programa finalizado. gracias por usarlo.";
            break;
        default:
            cout << "pone un valor valido\n";
        }
    }
    return 0;
}