//1CV11 HERNANDEZ GONZAlEZ JOSEPH FABRIZZIO
#include <iostream>
using namespace std;
// Definir la macro para calcular el cubo
#define CUBO(x) ((x) * (x) * (x))

int main() {
    // Declarar la variable para almacenar el número
    int numero;

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingresa un número entero: "<< endl;
    cin >> numero;

    // Calcular el cubo usando la macro
    int cubo = CUBO(numero);

    // Mostrar el resultado
    std::cout << "El cubo de " << numero << " es: " << cubo << std::endl;

    return 0;
}

