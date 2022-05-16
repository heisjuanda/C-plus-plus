/* 
  Nombre:Prueba5.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Agosto 21 de 2020
  Fecha de Modificación: Agosto 21 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  
 
#include <iostream>
#include <math.h>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea

int main(){
	int numero;
	cout<<"digite un numero "<<endl;
	numero=0;
	cin>>numero;
	
	if(numero%2==0 ){
		cout<<"el número es par"<<endl;
	}else{
		cout<<"el numero es inpar"<<endl;
	}
	 
}
