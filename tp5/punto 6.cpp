#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int arregloa[8], arreglob[8], a = 0, b = 0;
    for (a = 0; a < 8; a++) {
        arregloa[a] = rand() % 20 + 1;
    };
 
    for (a = 7; a >= 0; a--) {
        arreglob[b] = arregloa[a];
        b++;
    };
    for (a = 0; a < 8; a++) {
        cout << "el elemento numero " << a + 1 << " es: " << arreglob[a] << endl;
    }

    return 0;
}
