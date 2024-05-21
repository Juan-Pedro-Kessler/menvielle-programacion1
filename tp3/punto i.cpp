/*Hacer un programa en C++, que ayude a una empresa a incrementar los salarios de los 
trabajadores de la siguiente manera: 
Tipo de salario % 
◦ De 0 a $60000 20% 
◦ De $60000 a $100000 10% 
◦ De $100000 a $150000 5% 
◦ Más de $150000 3% */
#include <iostream>
using namespace std;
int main()
{
    float sueldo;
    cout << "ingrese el salario para ver si aumenta!\n";
    cin >> sueldo;
    if (sueldo > 0 && sueldo <= 60000) { cout << "recibira un aumento de " << sueldo * 0.2 << " y ganara un total de " << sueldo * 1.2; }
    if (sueldo > 60000 && sueldo <= 100000) { cout << "recibira un aumento de " << sueldo * 0.1 << " y ganara un total de " << sueldo * 1.1; }
    if (sueldo > 100000 && sueldo <= 150000) { cout << "recibira un aumento de " << sueldo * 0.05 << " y ganara un total de " << sueldo * 1.05; }
    if (sueldo > 150000) { cout << "recibira un aumento de " << sueldo * 0.03 << " y ganara un total de " << sueldo * 1.03; }
    return 0;
}

