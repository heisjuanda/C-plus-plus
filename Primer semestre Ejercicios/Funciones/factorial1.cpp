/* 
  Nombre:Punto 1 numeral B.cpp
  Autor: Juan David Moreno Alfonso 
  Fecha Creaci�n: Septiembre 12 de 2020
  Fecha de Modificaci�n: Septiembre 12 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co 
*/  

//Se incluye bibliotecas  

#include <stdio.h>
#include <string.h>
#include <iostream>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea
using std::string;//sirve para definir datos string

void suma(int z, int y){
	z+y;
}
void resta(int z, int y){
	z-y;
}

void multiplicaci�n(int z, int y){
	z*y;
}

void divisi�n(int z, int y){
	z/y;
}

int main(){
	setlocale(LC_CTYPE, "Spanish");//para las tildes
	int x,k;
	
	cout<<"imprima un valor"<<endl;
	cin>>x;
	k=1;
	cout<<"for factorial"<<endl;
	for(int i=1;i<=x;i++){
		k*=i;
	}cout<<k<<endl;
	
	
	
	
	system("pause");
	return 0;
}
