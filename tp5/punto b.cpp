#include <iostream>
using namespace std;

int main() {
    int numeros[] = { 24, 5, 58, 100, 0, -8, 94, 96, -16, 105 };
    int rt, a = 0;
    char aux = 'y';

    while (aux == 'y') {
        cout << "Elige un numero para buscar: ";
        cin >> rt;

        while (a < 10) {
            if (rt == numeros[a]) {
                cout << "el numero se encuentra en la posicion " << a << endl;
                break;
            }
            a++;
        }

        if (a == 10) {
            cout << "No se encontro el numero." << endl;
        }

        a = 0;
        cout << "Desea reintentar con otro numero? (y/n): ";
        cin >> aux;
    }

    return 0;
}
