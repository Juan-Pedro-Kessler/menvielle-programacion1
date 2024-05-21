#include <iostream>
using namespace std;
int main()
{
    int arregloa[5], arreglob[5], arregloc[10], a=0, b=0;
    for (a = 0; a < 5; a++) {
        cout << "ingresa el numero " << a + 1 << " del arreglo 1 \n";
        cin >> arregloa[a];
    };
    for (a = 0; a < 5; a++) {
        cout << "ingresa el numero " << a + 1 << " del arreglo 2 \n";
        cin >> arreglob[a];
    };
    for (a = 0; a < 10; a++) {
        if (b > 4) { b = 0; };
        if (a <= 4) { arregloc[a] = arregloa[b]; }
        else { arregloc[a] = arreglob[b]; };
        b++;
    };
    for (a = 0; a < 10; a++) {
        cout << "el elemento numero " << a + 1 << " es: " << arregloc[a] << endl;}

    return 0;
}

