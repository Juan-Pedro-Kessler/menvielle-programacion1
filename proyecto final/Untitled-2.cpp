#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct Productos {
    string nombre;
    double precio;
    string codigo;
};

int g_stock = 0;
double g_total = 0.0;

void guardar(Productos producto) {
    ofstream archivo("productos.csv", ios::app); 
    archivo << producto.nombre << "," << producto.precio << "," << producto.codigo << endl;
    archivo.close();
}

void cargar(Productos producto[]) {
    if (g_stock < 100) {
        cout << "Ingrese el nombre del producto: ";
        cin >> producto[g_stock].nombre;
        cout << "Ingrese el precio del producto: ";
        cin >> producto[g_stock].precio;
        cout << "Ingrese el codigo de barra del producto: ";
        cin >> producto[g_stock].codigo;
        
        guardar(producto[g_stock]);
        g_stock += 1;
    } else {
        cout << "Stock superado.\n";
    }
}

void mostrar(Productos producto[]) {
    cout << "Lista de productos:\n";
    ifstream archivo("productos.csv");
    if (archivo.is_open()) {
        string linea;
        int i = 0;
        while (getline(archivo, linea)) {
            stringstream stream(linea);
            string nombre, precioStr, codigo;
            getline(stream, nombre, ',');
            getline(stream, precioStr, ',');
            getline(stream, codigo, ',');
            producto[i].nombre = nombre;
            producto[i].precio = stod(precioStr);
            producto[i].codigo = codigo;
            cout << "==================\n";
            cout << "Nombre: " << producto[i].nombre << endl;
            cout << "Precio: " << producto[i].precio << endl;
            cout << "Codigo de barras: " << producto[i].codigo << endl;
            i++;
        }
        archivo.close();
    } else {
        cout << "Error al abrir el archivo para mostrar.\n";
    }
}

void editar(Productos producto[]) {
    string codigo;
    cout << "Ingrese el codigo del producto a editar: ";
    cin >> codigo;

    ifstream archivo("productos.csv");
    ofstream temporal("temporal.csv");
    bool encontrado = false;

    if (archivo.is_open() && temporal.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            stringstream stream(linea);
            string nombre, precioStr, codigoArchivo;
            getline(stream, nombre, ',');
            getline(stream, precioStr, ',');
            getline(stream, codigoArchivo, ',');
            
            if (codigoArchivo == codigo) {
                encontrado = true;
                cout << "Producto encontrado: " << nombre << ", " << precioStr << ", " << codigoArchivo << endl;
                cout << "Ingrese el nuevo precio: ";
                double nuevoPrecio;
                cin >> nuevoPrecio;
                temporal << nombre << "," << nuevoPrecio << "," << codigoArchivo << endl;
            } else {
                temporal << nombre << "," << precioStr << "," << codigoArchivo << endl;
            }
        }
        archivo.close();
        temporal.close();

        remove("productos.csv");
        rename("temporal.csv", "productos.csv");

        if (encontrado) {
            cout << "Precio actualizado correctamente.\n";
        } else {
            cout << "Producto no encontrado.\n";
        }
    } else {
        cout << "Error al abrir el archivo para editar.\n";
    }
}

void tarjeta(double tot) {
    string tarjeta;
    cout << "Ingrese el numero de su tarjeta: ";
    cin >> tarjeta;
    if (tarjeta[0] == '4' && tarjeta.length() == 16) {
        cout << "ticket\n============================\nPago aceptado.\nTarjeta Visa: " << tarjeta << "\nTotal de la compra: " << tot << endl;
    } else if (tarjeta[0] == '5' && tarjeta.length() == 16) {
        cout << "ticket\n============================\nPago aceptado.\nTarjeta Mastercard: " << tarjeta << "\nTotal de la compra: " << tot << endl;
    } else {
        cout << "Tarjeta declinada, compra rechazada.\n";
        g_total -= tot;
    }
}

void compra(Productos producto[]) {
    string codigo;
    char rt, rta;
    double compra, tot = 0, retiro;
    int cantidad;
    bool encontrado;

    do {
        encontrado = false;
        cout << "Ingrese el codigo del producto a comprar: ";
        cin >> codigo;

        ifstream archivo("productos.csv");

        if (archivo.is_open()) {
            string linea;
            while (getline(archivo, linea)) {
                stringstream stream(linea);
                string nombre, precioStr, codigoArchivo;
                getline(stream, nombre, ',');
                getline(stream, precioStr, ',');
                getline(stream, codigoArchivo, ',');

                if (codigoArchivo == codigo) {
                    encontrado = true;
                    cout << "Producto encontrado: " << nombre << ", " << precioStr << ", " << codigoArchivo << endl;
                    double precio = stod(precioStr);
                    cout << "Precio: " << precio << endl;
                    cout << "Ingrese la cantidad a comprar: ";
                    cin >> cantidad;
                    compra = precio * cantidad;
                    tot += compra;
                    cout << "Total a pagar: " << compra << endl;
                    break;
                }
            }
            archivo.close();

            if (encontrado) {
                cout << "Producto agregado al carrito.\n";
            } else {
                cout << "Producto no encontrado.\n";
            }
        } else {
            cout << "Error al abrir el archivo para comprar.\n";
        }

        cout << "Desea seguir comprando productos? (y/n): ";
        cin >> rt;
    } while (rt == 'y');
    if(tot>50000){tot=tot*0.7;}
    if(tot<=50000 && tot>30000){tot=tot*0.8;}
    if(tot<=30000 && tot>10000){tot=tot*0.9;}
    g_total += tot;
    cout << "Desea retirar dinero? (y/n): ";
    cin >> rta;
    if (rta == 'y') {
        cout << "Ingrese la cantidad: ";
        cin >> retiro;
        tot += retiro;
        g_total += retiro;
    }

    tarjeta(tot);
}

int main() {
    Productos producto[100];
    int rt = 1;
    while (rt != 5) {
        cout << "1 - Cargar productos.\n2 - Mostrar productos.\n3 - Editar precio.\n4 - Registrar una compra.\n5 - Salir.\n";
        cin >> rt;
        switch (rt) {
            case 1:
                cargar(producto);
                break;
            case 2:
                mostrar(producto);
                break;
            case 3:
                editar(producto);
                break;
            case 4:
                compra(producto);
                break;
            case 5:
                cout << "Los ingresos del dia son: " << g_total << endl;
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Ingrese una opcion valida.\n";
        }
    }
}
