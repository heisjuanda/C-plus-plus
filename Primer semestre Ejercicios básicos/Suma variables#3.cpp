/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Agosto 21 de 2020
  Fecha de Modificación: Agosto 21 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  
 
#include <iostream>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea

//Programa para cálcular la suma de dos números
/*
int main(){
	int x=5 ,y=9 ,suma ;
	
	suma= x + y;
	cout << "la suma totoal es: " << suma;
}
*/
//suma con variables 
int main(){
	setlocale(LC_CTYPE;"spanish");//sirve para colocar los acentos españoles
	double x,y, suma;
	cout<<"ejemplo de suma...Univalle"<<endl;
	cout<<"digite el primer número"<<"\n";
	cin>> x;
	
	cout<<"digite el segundo número"<<"\n";
	cin>> y;
	
	suma= x+y;
	cout<<"la suma total es:"<<suma<<endl;
	system ("pause");
	 
}
