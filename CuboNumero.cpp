//1CV11 HERNANDEZ GONZAlEZ JOSEPH FABRIZZIO
#include <iostream>
using namespace std;
// Definir la macro para calcular el cubo
#define CUBO(x) ((x) * (x) * (x))

int main() {
    // Declarar la variable para almacenar el n�mero
    int numero;

    // Solicitar al usuario que ingrese un n�mero entero
    cout << "Ingresa un n�mero entero: "<< endl;
    cin >> numero;

    // Calcular el cubo usando la macro
    int cubo = CUBO(numero);

    // Mostrar el resultado
    std::cout << "El cubo de " << numero << " es: " << cubo << std::endl;

    return 0;
}

