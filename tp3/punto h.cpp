/*Hacer un programa en C++, que solicite al usuario que ingrese una fecha y calcule el 
día correspondiente del año. Ejemplo, si se ingresa la fecha 31 12, el número que se 
visualizará será 365. (la fecha se debe ingresar en dos variables diferentes: dia y mes)*/

#include <iostream>
using namespace std;
int main()
{
    int dia, mes, total=0;
    cout << "ingresa el dia\n";
    cin >> dia;
    cout << "ingresa el mes\n";
    cin >> mes;
    if (mes == 1) { total = dia; }
    if (mes == 2) { total = 31 + dia; }
    if (mes == 3) { total = 59 + dia; }
    if (mes == 4) { total = 90 + dia; }
    if (mes == 5) { total = 120 + dia; }
    if (mes == 6) { total = 151 + dia; }
    if (mes == 7) { total = 181 + dia; }
    if (mes == 8) { total = 212 + dia; }
    if (mes == 9) { total = 243 + dia; }
    if (mes == 10) { total = 273 + dia; }
    if (mes == 11) {total = 304 + dia;}
    if (mes == 12) { total = 334 + dia; }
    cout << "es el dia " << total << endl;
}