#include<iostream>
using namespace std;
//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
int main() {
    int anio; // Define la variable
    cout << "Dame tu año de nacimiento" << endl;
    cin >> anio;

    if (anio >= 1950 && anio <= 1968) {
        cout << "Eres de la generación BABY BOOMER" << endl;
    } else if (anio >= 1969 && anio <= 1980) {
        cout << "Eres generación X" << endl;
    } else if (anio >= 1981 && anio <= 1993) {
        cout << "Eres de la generación Y" << endl;
    } else if (anio >= 1994 && anio <= 2010) {
        cout << "Eres de la generación Z" << endl;
    } else {
        cout << "Año no válido para clasificar generación" << endl;
    }

    return 0;
}

