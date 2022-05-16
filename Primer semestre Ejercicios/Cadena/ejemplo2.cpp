/*
	Nombre:ejemplo2.cpp
	Autor: Luis Germán Toro Pareja
	Fecha creación: Agosto 21 de 2020
	Fecha modificación: Agosto 21 de 2020
	Versión: 1.0
	Email: luis.german.toro@correounivalle.edu.co
*/

//Se incluye bibliotecas

#include <iostream>
using std::cout; // Inlcluyendo la función de cout para imprimir por pantalla.
using std::cin; // Inlcluyendo la función de cint para pedir datos
using std::endl;  // Inlcluyendo la función de endl saltos de línea 

//Programa permite calcular la suma de dos números
int main (){
	
	setlocale(LC_CTYPE, "spanish"); //me permite utilizar los acentos o caracteres especiales.
	double x, y, suma;
	cout<< "Ejemplo de SUMA -------- Universidad del Valle Sede Tuluá--------"<<endl;
	
	cout<<"Digite el primer número:" <<"\n";
	cin>> x;
	
	cout<<"Digite el segundo número:" <<"\n"; 
	cin>> y;
	
	suma= x + y;
	cout<<"La suma total de los dos número es :"<< suma << endl;
	system ("pause");
	
	/*int x= 5, y= 9, suma ;
	
	suma = x + y ;
	cout <<"La suma total es:" << suma;*/

	
	
	//cout <<"La suma de dos números es: "<< 5 + 9 ;
} 
