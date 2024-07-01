/*Crea un programa que gestione una lista de libros. Cada libro debe tener los siguientes 
atributos: título, autor y año de publicación. El programa debe tener las siguientes funciones: 
• agregarLibro: Esta función recibe por parámetro los datos de un libro (título, autor y 
año de publicación) y agrega un nuevo libro a la lista de libros. 
• buscarLibroPorAutor: Esta función recibe por parámetro el nombre de un autor y busca 
todos los libros de la lista que coincidan con ese autor. Devuelve una lista de libros que 
cumplen con la condición. 
• mostrarLibros: Esta función muestra en pantalla todos los libros de la lista, uno por 
línea. 
Utiliza una estructura llamada Libro para representar los datos de cada libro. */
#include <iostream>
#include <string>
using namespace std;

const int MAX_LIBROS = 100;

struct Libro {
    string titulo;
    string autor;
    int publicacion;
};

void agregarLibro(Libro libros[], int& cantidad) {
    if (cantidad >= MAX_LIBROS) {
        cout << "No se pueden agregar mas libros, el limite ha sido alcanzado." << endl;
        return;
    }

    cout << "Ingrese el titulo del libro: ";
    cin.ignore(); // Para ignorar el salto de línea pendiente en el buffer
    getline(cin, libros[cantidad].titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, libros[cantidad].autor);
    cout << "Ingrese el year de publicacion del libro: ";
    cin >> libros[cantidad].publicacion;
    cantidad++;
}

void buscarLibroPorAutor(const Libro libros[], int cantidad, const string& autor) {
    bool encontrado = false;
    for (int i = 0; i < cantidad; i++) {
        if (libros[i].autor == autor) {
            cout << "Titulo: " << libros[i].titulo << endl;
            cout << "Autor: " << libros[i].autor << endl;
            cout << "Year de publicacion: " << libros[i].publicacion << endl;
            cout << "--------------------" << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron libros para el autor " << autor << "." << endl;
    }
}

void mostrarLibros(const Libro libros[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay libros para mostrar." << endl;
        return;
    }

    for (int i = 0; i < cantidad; i++) {
        cout << "Titulo: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << "Year de publicacion: " << libros[i].publicacion << endl;
        cout << "--------------------" << endl;
    }
}

int main() {
    Libro libros[MAX_LIBROS];
    int cantidad = 0;
    int opcion;
    char rta;

    do {
        cout << "1 - Agregar libro\n2 - Buscar libro por autor\n3 - Mostrar libros\n";
        cin >> opcion;

        switch (opcion) {
        case 1:
            agregarLibro(libros, cantidad);
            break;
        case 2: {
            string autor;
            cout << "Ingrese el nombre del autor: ";
            getline(cin, autor);
            buscarLibroPorAutor(libros, cantidad, autor);
            break;
        }
        case 3:
            mostrarLibros(libros, cantidad);
            break;
        default:
            cout << "Por favor, elija una opción válida." << endl;
            break;
        }

        cout << "Desea seguir? (y/n): ";
        cin >> rta;

    } while (rta == 'y' || rta == 'Y');

    return 0;
}
