/*Hacer un programa en C++, para determinar el promedio de tres notas y determinar si el 
estudiante aprobó o no. */

#include <iostream>
using namespace std;
int main()
{
    float    rt, total=0;
    cout << "ingresa la nota 1\n";
    cin >> rt;
    total = total + rt;
    cout << "ingresa la nota 2\n";
    cin >> rt;
    total = total + rt;
    cout << "ingresa la nota 3\n";
    cin >> rt;
    total = total + rt;
    total = total / 3;
    if (total >= 6) { cout << "el alumno aprobo con un promedio de "<<total<<"!\n"; }
    else { cout << "el alumno desaprobo con un promedio de " << total << "...\n";}
    return 0;
}