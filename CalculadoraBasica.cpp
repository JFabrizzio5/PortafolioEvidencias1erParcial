#include <iostream>
using namespace std; 

int main(){
	
float resultado,numero1,numero2;
int opcion;
	
 cout<<"Selecciona una opcion"<<endl;
 cout<<"1-suma"<<endl;
 cout<<"2-resta"<<endl;
 cout<<"3-multiplicacion"<<endl;
 cout<<"4-division"<<endl;
 cout<<"Cualquier otra para cerrar"	<<endl;
	
	cin>>opcion;
	
	if(opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4){
	
	cout<<"Dame los 2 numero para hacer esa operacion"<<endl;
	cout<<"numero 1"<<endl;
	cin>>numero1;
	cout<<"Numero 2"<<endl;
	cin>>numero2;
	
	}
	
	
	switch(opcion){
		
		case 1:
			cout<<"La suma de los numeros que me diste es"<<endl;
			resultado = numero1 + numero2;
			cout<<resultado<<endl;	
		break;	

		case 2:
			cout<<"La resta de los numeros que me diste es"<<endl;
			resultado = numero1 - numero2;
			cout<<resultado<<endl;			
		break;
		
		case 3: 
			cout<<"La multiplicacion de los numeros que me diste es"<<endl;
			resultado = numero1 * numero2;
			cout<<resultado<<endl;		
		break;
		
		case 4:
			cout<<"La division de los numeros que me diste es"<<endl;
			resultado = numero1 / numero2;
			cout<<resultado<<endl;
		break;
		
		
		default:
		
			cout<<"Opcion para salir"<<endl;
	
		break;
	}
	
		cout<<"chao"<<endl;
}
