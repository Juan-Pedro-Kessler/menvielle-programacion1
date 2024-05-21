/*Hacer un programa en C++, para una tienda de zapatos que tiene una promoción de 
descuento para vender al mayor, esta dependerá del número de zapatos que se compren. 
Si son más de diez, se les dará un 10% de descuento sobre el total de la compra; si el 
número de zapatos es mayor de veinte, pero menor de treinta, se le otorga un 20% de 
descuento; y si son más treinta zapatos se otorgará un 40% de descuento. El precio de 
cada zapato es de $8000*/

#include <iostream>
using namespace std;
int main()
{
    int cantidad, total;
    cout << "ingrese la cantidad de zapatos que desee comprar(cada uno sale 8000)\n";
    cin >> cantidad;
    total = cantidad * 8000;
    cout << total << endl;
    if (cantidad > 10 && cantidad < 21) { cout << "tenes un descuento de " << total * 0.1 << " pesos y la compra sale un total de " << total*0.9<<endl; }
    if (cantidad > 20 && cantidad < 31) { cout << "tenes un descuento de " << total * 0.2 << " pesos y la compra sale un total de " << total*0.8 << endl; }
    if (cantidad > 30) { cout << "tenes un descuento de " << total * 0.4 << " pesos y la compra sale un total de " << total*0.6 << endl; }
    if (cantidad<11){cout << " no tenes un descuento y la compra sale un total de " << total << endl; }
}
