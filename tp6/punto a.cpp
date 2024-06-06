/*Escribe una función que reciba dos números enteros y devuelva su suma. */
#include <iostream>
using namespace std;
int suma(int c, int d) {
	int e;
	e = c + d;
	return e;
}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << "el resultado es: " << suma(a, b);
	return 0;
}
