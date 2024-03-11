#include <iostream>
using namespace std;
#define perimetrocuadrado(lado) (4*lado) 
#define areadecuadrado(lado) (lado*lado) //SE IDENTIFICAN LAS FORMULAS DE TODAS LAS MACROS
#define perimetrorectangulo(lado1,lado2) (2*lado1+2*lado2)
#define arearectangulo(lado1,lado2) (lado1*lado2)
#define areatriangulo(base,altura) (base*altura/2)
#define perimetrotriangulo(lado1,lado2,lado3) (lado1+lado2+lado3)
#define cuadradonumero(x) (x*x)
#define PI 3.1416
#define perimetrocirculo(pi, radio) (pi * radio)
//1CV11 HERNANDEZ GONZALEZ JOSEPH FABRIZZIO
int main() {
    int opcion, subopcion; //Variables para menu y submenu
    float lado, resultado, lado1, lado2, base, altura, ladotriangulo2, ladotriangulo3; //VARIABLES PARA LAS FIGURAS TRIANGULO CUADRADO Y RECTANCULO
	float radio,diametro,pi; //VARIABLES PARA EL CIRCULO
	
    cout << "Elije una opcion" << endl;
    cout << "1-Cuadrado" << endl;
    cout << "2-Rectangulo" << endl;	//Se imprime el menu
    cout << "3-Triangulo" << endl;
    cout << "4-Circulo" << endl;
    cin >> opcion;

    switch (opcion) {
    case 1:  //CALCULA CUADRADO
        cout << "Seleccionaste la opcion del cuadrado" << endl;
        cout << "Que quieres saber, area o perimetro?" << endl;
        cout << "1-area" << endl;
        cout << "2-perimetro" << endl;
        cin >> subopcion;
        cout << "Dame el lado del cuadrado" << endl;
        cin >> lado;
        if (subopcion == 1) {
            resultado = areadecuadrado(lado);
            cout << "El area del cuadrado es " << resultado << endl;
        } else if (subopcion == 2) {
            resultado = perimetrocuadrado(lado);
            cout << "El perimetro del cuadrado es " << resultado << endl;
        } else {
            cout << "Opcion no valida" << endl;
        }
        break;

    case 2: //CALCULA RECTANGULO
        cout << "Seleccionaste la opcion del rectangulo" << endl;
        cout << "Que quieres saber, area o perimetro?" << endl;
        cout << "1-area" << endl;
        cout << "2-perimetro" << endl;
        cin >> subopcion;
        if (subopcion == 1) {
            cout << "Dame primero el lado1 y luego el lado2 (base y altura)" << endl;
            cin >> lado1;
            cin >> lado2;
            resultado = arearectangulo(lado1, lado2);
            cout << "El area del rectangulo es " << resultado << endl;
        } else if (subopcion == 2) {
            cout << "Dame primero el lado1 y luego el lado2 (base y altura)" << endl;
            cin >> lado1;
            cin >> lado2;
            resultado = perimetrorectangulo(lado1, lado2);
            cout << "El perimetro del rectangulo es " << resultado << endl;
        } else {
            cout << "Opcion no valida" << endl;
        }
        break;

    case 3: //CALCULA Triangulo
        cout << "Seleccionaste la opcion del Triangulo" << endl;
        cout << "Que quieres saber, area o perimetro?" << endl;
        cout << "1-area" << endl;
        cout << "2-perimetro" << endl;
        cin >> subopcion;
        if (subopcion == 1) {
            cout << "Dame primero la base y luego la altura" << endl;
            cin >> base;
            cin >> altura;
            resultado = areatriangulo(base, altura);
            cout << "El area del triangulo es " << resultado << endl;
        } else if (subopcion == 2) {
            cout << "Dame los 3 lados del triangulo" << endl;
            cin >> lado1;
            cin >> ladotriangulo2;
            cin >> ladotriangulo3;

            resultado = perimetrotriangulo(lado1, ladotriangulo2, ladotriangulo3);
            cout << "El perimetro del triangulo es " << resultado << endl;
        } else {
            cout << "Opcion no valida" << endl;
        }
        break;

    case 4: //CALCULA ciruculo
        cout << "Seleccionaste la opcion del circulo" << endl;
        cout << "Que quieres saber, area o perimetro?" << endl;
        cout << "1-area" << endl;
        cout << "2-perimetro" << endl;
        cin >> subopcion;
        if (subopcion == 1) {
            cout << "Dame el radio" << endl;
            cin>>radio;
            resultado = PI * cuadradonumero(radio);//radio * radio
           	cout << "El area del circulo es " << resultado << endl;   

            
        } else if (subopcion == 2) {
            cout << "Dame el diametro" << endl;
            cin>>diametro;
        	resultado = perimetrocirculo(PI, diametro);
           
            cout << "El perimetro del circulo es " << resultado << endl;
        } else {
            cout << "Opcion no valida" << endl;
        }
        break;

    default: //Se declara una opcion no valida 
        cout << "Opcion no valida" << endl;
        break;
    }

    return 0;
}

