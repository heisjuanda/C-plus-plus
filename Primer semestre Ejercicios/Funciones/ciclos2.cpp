/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Septiembre 7 de 2020
  Fecha de Modificación: Septiembre 7 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  


#include <iostream>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea
using std::string;//sirve para definir datos string


int main(){
	int resultado,j,k;
	resultado=0;
	
	cout<<"for"<<endl;
	for(int i=1;i<=10;i++){
		resultado+=i;
	}
	cout<<resultado<<endl;
	
	
	cout<<"while"<<endl;
	resultado=0;
	while(j<=10){
		resultado+=j;
		j++;
	}
	cout<<resultado<<endl;
	
	
	resultado=0;	
	cout<<"do while"<<endl;
	do{
	 resultado+=k;
	 k++;
	}while(k<=10);
	cout<<resultado<<endl;
	
	
	
	
	system("pause");
	return 0;
}
