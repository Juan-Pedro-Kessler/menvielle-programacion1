/*Escribe una función llamada "intercambiar" que reciba dos variables de tipo string y las 
intercambie entre sí.*/
#include <iostream>
#include <string>
using namespace std;
void intercambiar(string &cadena1, string &cadena2) {
    string aux;
    aux = cadena1;
    cadena1 = cadena2;
    cadena2 = aux;
}
int main()
{
    string cadena1 = "string 1", cadena2 = "string 2";
    cout << "la cadena 1 primero es: " << cadena1 << "\ny la cadena 2 es: " << cadena2 << "\n \n \n";
    intercambiar(cadena1, cadena2);
    cout << "la cadena 1 despues es: " << cadena1 << "\ny la cadena 2 es: " << cadena2 << "\n \n \n";
    return 0;
}