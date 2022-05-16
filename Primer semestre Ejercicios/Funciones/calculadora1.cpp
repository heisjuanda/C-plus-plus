/* 
  Nombre:Punto Menu.cpp
  Autor: Juan David Moreno Alfonso 
  Fecha Creación: octubre 2 de 2020
  Fecha de Modificación: octubre 2 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co 
*/  

//Se incluye bibliotecas  

#include <stdio.h>
#include <string.h>
#include <iostream>
#include<conio.h>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea
using std::string;//sirve para definir datos string


void suma(){
	int resultado,n1,n2;
	
	cout<<"digite el número 1"<<endl;
	cin>>n1;
	
	cout<<"digite el otro valor"<<endl;
	cin>>n2;
	
	resultado=n1+n2;
	cout<<"el resultado es ";
	cout<<resultado<<endl;
}

void resta(){
	int resultado,n1,n2;
	cout<<"digite el número 1"<<endl;
	cin>>n1;
	cout<<"digite el otro valor"<<endl;
	cin>>n2;
	resultado=n1-n2;
	cout<<"el resultado es ";
	cout<<resultado<<endl;
}

void multiplicacion(){
	int resultado,n1,n2;
	cout<<"digite el número 1"<<endl;
	cin>>n1;
	cout<<"digite el otro valor"<<endl;
	cin>>n2;
	resultado=n1*n2;
	cout<<"el resultado es ";
	cout<<resultado<<endl;
}

void division(){
	int resultado,n1,n2;
	cout<<"digite el número 1"<<endl;
	cin>>n1;
	cout<<"digite el otro valor"<<endl;
	cin>>n2;
	resultado=n1/n2;
	cout<<"el resultado es ";
	cout<<resultado<<endl;
}

int main(){
	setlocale(LC_CTYPE, "Spanish");//para las tildes
	int opcion;
	
	do{
	cout<<"1. suma"<<endl;
	cout<<"2. resta"<<endl;
	cout<<"3. multiplicar"<<endl;
	cout<<"4. dividir"<<endl;
	cout<<"5. salir"<<endl;
	cout<<"digite una opción"<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1:
		suma();	//se llama la función auxiliar
		break;
		
		case 2:
		resta();
		break;
		
		case 3:
		multiplicacion();
		break;
		
		case 4:
		division();
		break;
		
		case 5:
		cout<<"Adios, gracias por usar el programa"<<endl;
		break;
		default:
			cout<<"Datos invalidos, se cerrara el programa"<<endl;
			
	}
	
	}while(opcion<5);
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
