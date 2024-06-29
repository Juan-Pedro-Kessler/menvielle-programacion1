#include <iostream>
using namespace std;

void insercion(int numeros[], int n) { // ALGORITMO DE ORDENAMIENTO POR INSERCION
    for (int i = 1; i < n; i++) { // Comenzar en 1 ya que el primer elemento se considera ordenado
        int pos = i;
        int aux = numeros[i]; // Almacena el valor al que ingresa en el arreglo

        while ((pos > 0) && (numeros[pos - 1] < aux)) { // Cambiar el operador < a > para orden ascendente
            numeros[pos] = numeros[pos - 1]; // Desplazar el elemento hacia la derecha
            pos--;
        }
        numeros[pos] = aux; // Insertar el elemento en su posición correcta
    }
}
void insercioni(int numeros[], int n) {
    for (int i = 0; i < n; i++)
    {
        int pos = i;
        while ((pos > 0) && (numeros[pos - 1] < numeros[pos]))
        {
            //INTERCAMBIAMOS CON LA VARIABLE TEMPORAL
            int tmp = numeros[pos];
            numeros[pos] = numeros[pos - 1];
            numeros[pos - 1] = tmp;
            pos--;
        }
    }
}
void burbujeo(int numeros[], int n) { // Correct parameter types
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (numeros[j] < numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}
void seleccion(int numeros[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int menor = numeros[i];
        int x = i;
        for (int j = i; j < n; ++j) {
            if (numeros[j] > menor) {
                menor = numeros[j];
                x = j;
            }
        }
        numeros[x] = numeros[i];
        numeros[i] = menor;
    }
}
void mostrar(int numeros[], int n) {
    // IMPRIMO EN ORDEN ASCENDENTE ORDENADO
    cout << "Arreglo Ordenado: ";
    for (int j = 0; j < n; j++) {
        cout << numeros[j] << " ";
    }
    cout << endl;
}
int main() {
    int n = 5, rt;
    int numeros[] = { 5, 3, 1, 2, 4 }; // ARREGLO DESORDENADO
    cout << "ingrese una opcion:\n1-insercion.\n2-insercion por intercambio.\n3-burbujeo.\n4-seleccion directa.\n";
    cin >> rt;
    switch (rt) {
    case 1:
        insercion(numeros, n);
        mostrar(numeros, n);
        break;
    case 2:
        insercioni(numeros, n);
        mostrar(numeros, n);
        break;
    case 3:
        burbujeo(numeros, n);
        mostrar(numeros, n);
        break;
    case 4:
        seleccion(numeros, n);
        mostrar(numeros, n);
        break;
    default:
        cout << "pone un valor valido";
        break;
    }

    return 0;
}