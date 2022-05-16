/*
	Nombre:ejemplo4.cpp
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

double sumaTotal(double , double); // se define el m�todo sumaTotal, que permite sumar dos n�meros
double resta(double , double);

int main(){
	setlocale(LC_CTYPE, "Spanish");/*Para poder utilizar los acentos*/
	double num1, num2;
	
	cout<<"Digite el primer n�mero:" <<"\n";
	cin>> num1;
	
	cout<<"Digite el segundo n�mero:" <<"\n"; 
	cin>> num2;
	
	cout<<"La suma es: "<<sumaTotal(num1, num2) <<" " << endl<<"La resta es:"<<resta(num1, num2)<<endl;
	
	system ("pause");
	
}

double sumaTotal(double a, double b){  // a= num1 , b=num2
	double suma;
	suma =a + b;
	return suma;
}

double resta(double a, double b){  // a= num1 , b=num2
	double suma;
	suma =a - b;
	return suma;
}


