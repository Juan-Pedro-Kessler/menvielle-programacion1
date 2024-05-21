#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    char arreglo[10];
    int a = 0, b = 0, c;

    cout << "Ingresa la cadena (maximo 10 caracteres): ";
    cin >> cadena;

    a = cadena.size() - 1;
    c = a;
    
    while (a >= 0) {
        arreglo[b] = cadena[a];
        a--;
        b++;
    }

    while (b < 10) {
        arreglo[b] = '*';
        b++;
    }
    
    for (a = 0; a < 10; a++) {
        cout << arreglo[a];
    }
    cout << endl;

    return 0;
}
