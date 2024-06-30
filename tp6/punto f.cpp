/*Estructuras y manejo de arreglos. 

a) Crea una estructura "Estudiante" con los campos "nombre", "edad" y "notas" (este 
campo debe almacenar la nota de los 3 parciales). Crea un arreglo de estructuras de 
tamaño 3 y permite que el usuario ingrese los datos de los estudiantes. 

b) Mostrar la nota más alta de cada estudiante de forma clara. 

c) Calcular y mostrar el promedio de cada alumno y el promedio general del curso. 

d) Modificar la nota del tercer parcial del segundo estudiante. Si tiene una nota menor que 
60, se le debe sumar el 25%, si la nota está entre 60 y 80 se le debe sumar el 5% y si es 
mayor que 80 debe restar el 3%. */
#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Alumnos
struct Alumnos {
    string nombre;
    int edad;
    int notas[3];
};

// Función para llenar los datos de los alumnos
void llenar(Alumnos alumno[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        cin >> alumno[i].nombre;
        cout << "Ingrese la edad del alumno " << i + 1 << ": ";
        cin >> alumno[i].edad;
        for (int j = 0; j < 3; j++) {  // El segundo bucle debe ser hasta 3, no hasta n
            cout << "Ingrese la nota " << j + 1 << " del alumno " << i + 1 << ": ";
            cin >> alumno[i].notas[j];
        }
    }
}

// Función para mostrar la nota más alta de cada alumno
void mostrarNotaMasAlta(Alumnos alumno[], int n) {
    for (int i = 0; i < n; i++) {
        int maxNota = alumno[i].notas[0];
        for (int j = 1; j < 3; j++) {
            if (alumno[i].notas[j] > maxNota) {
                maxNota = alumno[i].notas[j];
            }
        }
        cout << "La nota mas alta del alumno " << alumno[i].nombre << " es: " << maxNota << endl;
    }
}

// Función para mostrar los promedios de cada alumno y el promedio general
void mostrarPromedios(Alumnos alumno[], int n) {
    int sumaGeneral = 0;
    for (int i = 0; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += alumno[i].notas[j];
        }
        int promedio = suma / 3;
        sumaGeneral += promedio;
        cout << "El promedio del alumno " << alumno[i].nombre << " es: " << promedio << endl;
    }
    int promedioGeneral = sumaGeneral / n;
    cout << "El promedio general del curso es: " << promedioGeneral << endl;
}

// Función para modificar la nota del tercer parcial del segundo alumno
void modificarNota(Alumnos& alumno) {
    int& notaTercerParcial = alumno.notas[2];
    if (notaTercerParcial < 60) {
        notaTercerParcial += notaTercerParcial * 0.25;
    }
    else if (notaTercerParcial >= 60 && notaTercerParcial <= 80) {
        notaTercerParcial += notaTercerParcial * 0.05;
    }
    else {
        notaTercerParcial -= notaTercerParcial * 0.03;
    }
    cout << "La nueva nota del tercer parcial del segundo alumno es: " << notaTercerParcial << endl;
}

int main() {
    Alumnos alumno[3];
    int n = 3;

    llenar(alumno, n);
    mostrarNotaMasAlta(alumno, n);
    mostrarPromedios(alumno, n);
    modificarNota(alumno[1]);

    return 0;
}

