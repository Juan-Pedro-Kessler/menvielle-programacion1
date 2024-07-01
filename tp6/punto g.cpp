/* Implementa una función que reciba una estructura "Persona" (con campos como nombre, 
edad, etc.) por valor y la imprima en pantalla.*/
#include <iostream>
#include <string>
using namespace std;
struct Personas{
    string nombre;
    int edad;
    int year;
};
void llenar(Personas persona[], int i) {
    cout << "ingrese el nombre de la persona "<<i+1<<endl;
    cin >> persona[i].nombre;
    cout << "ingrese la edad de la persona " << i + 1 << endl;
    cin >> persona[i].edad;
    cout << "ingrese el year de nacimiento de la persona " << i + 1 << endl;
    cin >> persona[i].year;
};
void mostrar(Personas persona[], int i) {
    for (int n = 0; n < i; n++) {
        cout << "Persona " << n + 1 << ":\n";
        cout << "Nombre: " << persona[n].nombre << endl;
        cout << "Edad: " << persona[n].edad << endl;
        cout << "year de nacimiento: " << persona[n].year << endl;
    }
};
int main()
{
    Personas persona[100];
    char rt='y';
    int i;
    for (i = 0; i < 100 && rt == 'y'; i++) {
        llenar(persona, i);
        cout << "deseas seguir?(y/n)\n";
        cin >> rt;
    }
    mostrar(persona, i);
    return 0;
}