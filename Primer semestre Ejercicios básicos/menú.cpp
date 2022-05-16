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
  
  
void equilatero(){
	double lado1,resultado;
	cout<<"digite el lado 1"<<endl;
	cin>>lado1;
	resultado=lado1+lado1+lado1;
	cout<<"el resultado es: "<<resultado<<endl;	
}
void Isosceles(){
	double lado1,lado2,resultado;
	cout<<"digite el lado 1"<<endl;
	cin>>lado1;
	cout<<"digite el lado que se repite"<<endl;
	cin>>lado2;
	
	resultado=lado1+(lado2*2);
	cout<<"el resultado es: "<<resultado<<endl;	
}
void Escaleno(){
	double lado1,lado2,lado3,resultado;
	cout<<"digite el lado 1"<<endl;
	cin>>lado1;
	cout<<"digite el lado 2"<<endl;
	cin>>lado2;
	cout<<"digite el lado 3"<<endl;
	cin>>lado3;
	
	resultado=lado1+lado2+lado3;
	cout<<"el resultado es: "<<resultado<<endl;	
}

int main(){//función principal
 double lado1,lado2,lado3,resultado=0;
 int opcion;
  setlocale(LC_CTYPE, "Spanish");//para las tildes 
  
  do{
	cout<<"1.equilátero"<<endl;
	cout<<"2.Isósceles"<<endl;
	cout<<"3.Escaleno"<<endl;
	cout<<"4. salir"<<endl;
	cout<<"digite una opción"<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1:
		equilatero();	//se llama la función auxiliar
		break;
		
		case 2:
		Isosceles();
		break;
		
		case 3:
		Escaleno();
		break;
		
		case 4:
		cout<<"Adios, gracias por usar el programa"<<endl;
		break;
		default:
			cout<<"Datos invalidos, se cerrara el programa"<<endl;
			
	}
	
	}while(opcion<4);
	
	
  
  system("pause");
 return 0; 
}
