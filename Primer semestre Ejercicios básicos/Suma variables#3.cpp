/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creaci�n: Agosto 21 de 2020
  Fecha de Modificaci�n: Agosto 21 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  
 
#include <iostream>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea

//Programa para c�lcular la suma de dos n�meros
/*
int main(){
	int x=5 ,y=9 ,suma ;
	
	suma= x + y;
	cout << "la suma totoal es: " << suma;
}
*/
//suma con variables 
int main(){
	setlocale(LC_CTYPE;"spanish");//sirve para colocar los acentos espa�oles
	double x,y, suma;
	cout<<"ejemplo de suma...Univalle"<<endl;
	cout<<"digite el primer n�mero"<<"\n";
	cin>> x;
	
	cout<<"digite el segundo n�mero"<<"\n";
	cin>> y;
	
	suma= x+y;
	cout<<"la suma total es:"<<suma<<endl;
	system ("pause");
	 
}
