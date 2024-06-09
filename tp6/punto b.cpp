#include <iostream>
using namespace std;

// Función para calcular la suma de los elementos de un arreglo
int suma(int c, int arre[]) {
    int total = 0;
    for (int d = 0; d < c; d++) {
        total += arre[d];
    }
    return total; // Retornamos el total en lugar de imprimirlo
}

int main() {
    const int a=5;
    int arreglo[a];
    cout << "Introduce los elementos del arreglo: ";
    for (int b = 0; b < a; b++) {
        cin >> arreglo[b];
    }

    // Llamamos a la función suma pasando el arreglo completo
    int resultado = suma(a, arreglo);

    // Imprimimos el resultado
    cout << "La suma de los elementos del arreglo es: " << resultado << endl;

    return 0;
}
