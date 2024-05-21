#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int arregloa[5], arreglob[5], arregloc[10], a=0, b=0;
    for (a = 0; a < 5; a++) {
        arregloa[a] = rand() % 35 + 3;
        arreglob[a] = rand() % 35 + 3;
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

