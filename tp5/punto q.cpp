/*ejercicio b del 3 de la 5.1*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int n = 6;
    int matriz[n][n];
    char rt;
    srand(time(NULL));

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl << endl;
    }

    cout << "El recorrido es el siguiente: \n\n";

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {  
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j] << "\t";
            }
        }
        else {  
            for (int j = n - 1; j >= 0; j--) {
                cout << matriz[i][j] << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
