#include <iostream>
using namespace std;
int main()
{
    int numero[10], a = 0, total = 0;
    while (a <= 9) {
        cout << "ingresa el numero " << a + 1 << endl;
        cin >> numero[a];
        total = total + numero[a];
        a++;
    };
    cout << "la suma de todos esos numeros es " << total;
    return 0;
}
