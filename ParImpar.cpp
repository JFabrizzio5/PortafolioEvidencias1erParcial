//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
#include <iostream>

int main() {
    // Declarar la variable para almacenar el n�mero
    int numero;

    // Solicitar al usuario que ingrese un n�mero entero
    std::cout << "Ingresa un n�mero entero: ";
    std::cin >> numero;

    // Verificar si el n�mero es par o impar
    if (numero % 2 == 0) {
        std::cout << numero << " es un n�mero par." << std::endl;
    } else {
        std::cout << numero << " es un n�mero impar." << std::endl;
    }

    return 0;
}

