#include <iostream>
using namespace std; 

int main (){
	
	float numero,contadorcero;
	
	cout<<"Numeros mayores a 0 "<<endl;
	
	 for (int i=1
	 ; i<10 ;i++){
	 	
		 cout<<"pon el nunero "<< i <<endl;
	 	cin>>numero;
	 	
	 	if(numero<=0){
	 		contadorcero=contadorcero+1;
		 }
	 		 	
	 }
	 
	 cout<<"Los numeros mayores a 0 son: "<<contadorcero<<"hasta luego"<<endl;
	
}
