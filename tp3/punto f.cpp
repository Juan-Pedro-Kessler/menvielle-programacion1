/*Hacer un programa en C++, para una tienda de helado da un descuento por compra a 
sus clientes con membresía dependiendo de su tipo, sólo existen tres tipos de 
membresía, tipo A, tipo B y tipo C. Los descuentos son los siguientes: 
◦ Tipo A 10% de descuento 
◦ Tipo B 15% de descuento 
◦ Tipo C 20% de descuento*/

#include <iostream>
using namespace std;
int main()
{
    char membresia;
    float total;
    cout << "ingrese la membresia del cliente\n";
    cin >> membresia;
    cout << "ingresa el monto de compra\n";
    cin >> total;
    switch (membresia) {
    case 'A':
    case 'a':
        cout << "se le descuentan " << total * 0.1 << " y se le cobra un total de " << total * 0.9;
        break;
    case 'B':
    case 'b':
        cout << "se le descuentan " << total * 0.15 << " y se le cobra un total de " << total * 0.85;
        break;
    case 'C':
    case 'c':
        cout << "se le descuentan " << total * 0.2 << " y se le cobra un total de " << total * 0.8;
        break;
    default:
        cout << "pone una membresia valida";
        break;
    }
}