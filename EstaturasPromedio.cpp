#include <iostream>
using namespace std;
//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
int main() {
    int estaturas;  // Declaraci�n de la variable estaturas
    cout << "Dame de cuantas estaturas quieres sacar el promedio: ";
    cin >> estaturas;

    float estatura_5[estaturas]; // Declaraci�n de arreglo con el tama�o definido por el usuario
    float suma = 0, media; // Declaraci�n de variables

    cout << "Dame las estaturas" << endl;
    for (int i = 0; i < estaturas; i++) {
        cout << "Alumno " << i + 1 << ": ";
        cin >> estatura_5[i];
        suma = suma + estatura_5[i];
    }

    media = suma / estaturas; // Calcular la media dividiendo por el n�mero total de estaturas ingresadas
    cout << "La media de las estaturas es: " << media << endl;

    return 0;
}

