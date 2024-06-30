/*Cargar un arreglo de 10 lugares con números aleatorios (usar el rango que quiera), ordenarlo 
de manera ascendente eligiendo uno de los métodos de ordenación anteriores y realizar la 
búsqueda de un número ingresado por el usuario, usando la búsqueda binaria. */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void rellenar(int numeros[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        numeros[i] = rand() % 100 + 1;
    }
}
void ordenar(int numeros[], int n) {
    int pos, aux;
    for (int i = 0; i < n; i++) {
        pos = i;
        aux = numeros[i];
        while (pos > 0 && numeros[pos] < numeros[pos - 1]) {
            numeros[pos] = numeros[pos - 1];
            numeros[pos - 1] = aux;
            pos--;
        }
    }
}
void mostrar(int numeros[], int n){
    int i;
    for (i = 0; i < n; i++) {
        cout << numeros[i] << "\t";
    }
    cout << endl;
}
void binaria(int numeros[], int n) {
    int rt, m, i = 0, d = n - 1;
    bool encontrado = false;
    m = (i + d) / 2;
    cout << "ingrese el numero que desea buscar:\n";
    cin >> rt;
    while (i <= d && encontrado==false) {
        if (rt > numeros[m]) { i = m + 1;}
        if (rt == numeros[m]) { cout << "se encontro el numero en la posicion: " << m + 1 << endl; encontrado = true; }
        if (rt < numeros[m]) { d = m - 1;}
        if (i > d) { cout << "no se encontro el numero\n";}
        m = (i + d) / 2;
    }
}
int main()
{
    const int n = 10;
    int numeros[n];
    rellenar(numeros, n);
    cout << "arreglo desordenado:\n";
    mostrar(numeros, n);
    ordenar(numeros, n);
    cout << "arreglo ordenado:\n";
    mostrar(numeros, n);
    cout << "busqueda binaria:\n";
    binaria(numeros, n);
    return 0;
}