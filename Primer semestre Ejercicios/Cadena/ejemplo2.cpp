/*
	Nombre:ejemplo2.cpp
	Autor: Luis Germ�n Toro Pareja
	Fecha creaci�n: Agosto 21 de 2020
	Fecha modificaci�n: Agosto 21 de 2020
	Versi�n: 1.0
	Email: luis.german.toro@correounivalle.edu.co
*/

//Se incluye bibliotecas

#include <iostream>
using std::cout; // Inlcluyendo la funci�n de cout para imprimir por pantalla.
using std::cin; // Inlcluyendo la funci�n de cint para pedir datos
using std::endl;  // Inlcluyendo la funci�n de endl saltos de l�nea 

//Programa permite calcular la suma de dos n�meros
int main (){
	
	setlocale(LC_CTYPE, "spanish"); //me permite utilizar los acentos o caracteres especiales.
	double x, y, suma;
	cout<< "Ejemplo de SUMA -------- Universidad del Valle Sede Tulu�--------"<<endl;
	
	cout<<"Digite el primer n�mero:" <<"\n";
	cin>> x;
	
	cout<<"Digite el segundo n�mero:" <<"\n"; 
	cin>> y;
	
	suma= x + y;
	cout<<"La suma total de los dos n�mero es :"<< suma << endl;
	system ("pause");
	
	/*int x= 5, y= 9, suma ;
	
	suma = x + y ;
	cout <<"La suma total es:" << suma;*/

	
	
	//cout <<"La suma de dos n�meros es: "<< 5 + 9 ;
} 
