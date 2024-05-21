/*Hacer un programa en C++, que lea tres números y diga cuál es el mayor. */
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, mayor;

    cout << "ingresa el numero 1\n";
	cin >> a;
	cout << "ingresa el numero 2\n";
	cin >> b;
	cout << "ingresa el numero 3\n";
	cin >> c;
	if (a > b && a > c) { mayor = a; }
	if (b > a && b > c) { mayor = b; }
	if (c > a && c > b) { mayor = c; }
	cout << "el numero mayor es: " << mayor << endl;
}