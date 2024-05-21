/*Hacer un programa en C++, para ayudar a un trabajador a saber cuál será su sueldo 
semanal, se sabe que, si trabaja 40 horas o menos, se le pagará $1000 por hora, pero si 
trabaja más de 40 horas entonces las horas extras se le pagarán a $2000 por hora.*/
#include <iostream>
using namespace std;
int main()
{
    int horas, sueldo;
    cout << "ingrese las horas trabajadas\n";
    cin >> horas;
    if (horas > 40) { sueldo = 40 * 1000 + (horas - 40) * 2000; }
    else { sueldo = horas * 1000; }
    cout << "gano un total de: " << sueldo;
    return 0;
}
