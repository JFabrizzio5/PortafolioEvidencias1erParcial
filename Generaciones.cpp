#include<iostream>
using namespace std;
//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
int main() {
    int anio; // Define la variable
    cout << "Dame tu a�o de nacimiento" << endl;
    cin >> anio;

    if (anio >= 1950 && anio <= 1968) {
        cout << "Eres de la generaci�n BABY BOOMER" << endl;
    } else if (anio >= 1969 && anio <= 1980) {
        cout << "Eres generaci�n X" << endl;
    } else if (anio >= 1981 && anio <= 1993) {
        cout << "Eres de la generaci�n Y" << endl;
    } else if (anio >= 1994 && anio <= 2010) {
        cout << "Eres de la generaci�n Z" << endl;
    } else {
        cout << "A�o no v�lido para clasificar generaci�n" << endl;
    }

    return 0;
}

