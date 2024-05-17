#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << "a" << i + 1 << j + 1 << "\t";
        }
        cout << endl;
    }
    cout << "que fila deseas sumar?"<<endl;
    cin >> i;
    cout << "que columna deseas sumar?"<<endl;
    cin >> j;
    cout << "el resultado es: " << i + j;
}