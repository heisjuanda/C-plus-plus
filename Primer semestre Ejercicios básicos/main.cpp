/* 
  Nombre:main.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creaci�n: Agosto 28 de 2020
  Fecha de Modificaci�n: Agosto 28 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/
#include "Hipotenusa.h"
#include <iostream>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea

int main(){
	Hipotenusa miHipo;
	double a,b;
	cout<<"digite el cateto a"<<endl;
	cin>>a;
	cout<<"digite el cateto b"<<endl;
	cin>>b;
	
	
	miHipo.calcularHipotenusa(a,b);
	cout<<"el valor dela hipotenusa es: "<<miHipo.calcularHipotenusa(a,b)<<endl;
	system("pause");
	
} 
