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
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea

double sumaTotal(double, double);//se define el método sumaTotal, que permite sumar dos números
int main(){
	double num1, num2, suma;
	cout<<"digite el primer número"<<endl;
	cin>>num1;
	
	cout<<"digite el segundo número"<<endl;
	cin>>num2;
	cout<<"la suma es: "<<sumaTotal(num1,num2)<<endl;
	
	system("pause");
}

double sumaTotal(double a, double b){  //a= num1, b= num2
	double suma;
	suma= a+b;
	return suma;
}



