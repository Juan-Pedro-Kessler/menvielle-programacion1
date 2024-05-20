//   Misma consigna que el ejercicio anterior pero ahora dejando los espacios del medio sin llenar.
#include <iostream>
using namespace std;

int main() {
    char simbolo = '*';
    int rt, a, b;

    cout << "elegi tu numero de lados\n";
    cin >> rt;

    for (a = 0; a < rt; a++) {
        for (b = 0; b < rt; b++) {
            if (a == 0 || a == rt - 1) {
                cout << simbolo;
            }
            else {
                if (b == 0 || b == rt - 1) {
                    cout << simbolo;
                }
                else {
                    cout << ' ';
                }
            }
            cout << "\t";
        }
        cout << "\n \n \n";
    }

    return 0;
}
