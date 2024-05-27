/*ejercicio a del 3 de la 5.1*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    const int n = 6;
    int matriz[n][n];
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
        cout << endl<<endl<<endl;
    }
    cout << "el recorrido es el siguiente: \n \n";
    for (int j = 5; j > -1; j--) {
        for (int i = 0; i < n; i++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
}