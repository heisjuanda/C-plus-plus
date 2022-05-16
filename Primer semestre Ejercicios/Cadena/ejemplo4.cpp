/*
	Nombre:ejemplo4.cpp
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

double sumaTotal(double , double); // se define el método sumaTotal, que permite sumar dos números
double resta(double , double);

int main(){
	setlocale(LC_CTYPE, "Spanish");/*Para poder utilizar los acentos*/
	double num1, num2;
	
	cout<<"Digite el primer número:" <<"\n";
	cin>> num1;
	
	cout<<"Digite el segundo número:" <<"\n"; 
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


