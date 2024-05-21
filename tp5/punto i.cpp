#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int i = 0, j = 0, a = 0, rt, matriz[10][10];
    char opc='y';
    bool d = false;
    srand(time(0));
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 99 + 1;
        }
    }
    
    for(i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            cout << matriz[i][j]<< "\t";
        }
        cout << endl;
    }
    while (opc == 'y') {
        cout << "que numero deseas buscar?\n";
        cin >> rt;
        for (i = 0; i < 10 && d==false; i++) {
            for (j = 0; j < 10 && d==false; j++) {
                if (rt == matriz[i][j]) {
                    d = true;
                    break;}
                else { d=false; };
            }
        
        }
        if (d == true) { cout << "el numero se encuentra en la matriz\n"; }
        else { cout << "el numero NO se encuentra en la matriz\n"; };
        cout << "deseas reintentar con otro numero?\n";
        cin >> opc;
        if (opc == 'y') { d = false; };
    }
}