#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char matriz[5][5], rt;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                cout << "elegi un numero para ese espacio \n";
                cin >> rt;
                matriz[i][j] = rt;
            }
            else { matriz[i][j] = 'x'; }
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
            

}
