/*Escribir un programa que genere un número aleatorio entre 1 y 100, y le pida al usuario que 
adivine el número. El programa debe indicar si el número ingresado por el usuario es mayor 
o menor que el número generado, y permitir que el usuario ingrese otro número. El programa 
debe seguir solicitando que el usuario ingrese un número hasta que adivine el número 
correcto. Una vez que el usuario adivine el número, el programa debe mostrar cuántos intentos 
le llevó al usuario adivinarlo.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int intentos=0, adivinar, rt=0;
    srand(time(0));
    adivinar = rand() % 100 + 1;
    cout << adivinar<<endl;
    while (rt != adivinar) {
        cout << "ingresa el numero\n";
        cin >> rt;
        if (rt == adivinar) { cout << "acertaste!\n"; }
        else {
            if (rt > adivinar) { cout << "el numero a adivinar es menor\n"; }
            else { cout << "el numero a adivinar es mayor\n"; };
        }
        intentos++;
    }
    cout << "te costo  " << intentos << " en adivinarlo\n";
    return 0;
}

