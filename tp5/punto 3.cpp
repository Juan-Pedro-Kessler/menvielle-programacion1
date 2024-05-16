#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int aleatorio[8], a = 0, b = 0, min, may = 0, c = 0;
    while (a < 8) {
        aleatorio[a] = rand() % 9 + 1;
        a++;
    }
    a = 0;
    while (a < 8) {
        if (a == 0) {
            min = aleatorio[a];
        }
        else {
            if (aleatorio[a] < min) {
                min = aleatorio[a];
            }
            if (aleatorio[a] > may) {
                may = aleatorio[a];
            }
        }
        a++;
    }
    cout << "El mayor es: " << may << "\nY el menor es: " << min << endl;

    while (b < 8) {
        while (a < 8) {
            if (aleatorio[b] == aleatorio[a]) {
                c = c + 1;
            }
            a++;
        }
        cout << "El numero " << aleatorio[b] << " tiene " << c << " numeros iguales\n";
        c = 0;
        a = 0;
        b++;
    }

    return 0;
}
