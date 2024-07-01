/*implementa una función llamada "quitarVocales" que reciba una cadena de caracteres y 
elimine todas las vocales de la palabra, manteniendo el resultado en la misma variable. */
#include <iostream>
#include <string>
using namespace std;

void quitarVocales(string& palabra, int n) {
    char vocales[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            if (palabra[i] == vocales[j]) {
                palabra[i] = ' ';
                break;
            }
        }
    }
}

int main() {
    string palabra;
    cout << "Ingresa una palabra: ";
    cin >> palabra;
    int n = palabra.size();
    quitarVocales(palabra, n);
    cout << "Resultado sin vocales: " << palabra << endl;
    return 0;
}
