//  Escribir un programa que al ingresar el lado de un cuadrado dibuje en consola un cuadrado con el carácter
#include <iostream>
using namespace std;
int main()
{
    char simbolo = '*';
    int rt, a, b;
    cout << "elegi tu numero de lados\n";
    cin >> rt;
    for (a = 0; a < rt; a++) {
        for (b = 0; b < rt; b++) {
            cout << simbolo << "\t";
        }
    cout << endl;
    }
}
