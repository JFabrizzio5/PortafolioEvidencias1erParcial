//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
#include <iostream>

int main() {
    // Declarar la variable para almacenar el número
    int numero;

    // Solicitar al usuario que ingrese un número entero
    std::cout << "Ingresa un número entero: ";
    std::cin >> numero;

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        std::cout << numero << " es un número par." << std::endl;
    } else {
        std::cout << numero << " es un número impar." << std::endl;
    }

    return 0;
}

