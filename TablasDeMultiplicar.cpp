//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
#include <iostream>

using namespace std;

int main() {
    // Declarar variables para la tabla y el l�mite
    int tabla, limite;

    // Solicitar al usuario que ingrese la tabla de multiplicar deseada
    cout << "Ingresa la tabla de multiplicar que quieres mostrar: ";
    cin >> tabla;

    // Solicitar al usuario que ingrese el l�mite superior
    cout << "Ingresa hasta qu� n�mero quieres mostrar la tabla: ";
    cin >> limite;

    // Mostrar la tabla de multiplicar hasta el l�mite
    cout << "Tabla de multiplicar del " << tabla << " hasta " << limite << ":" << endl;

    for (int i = 1; i <= limite; ++i) {
        cout << tabla << " x " << i << " = " << (tabla * i) << endl;
    }

    return 0;
}

