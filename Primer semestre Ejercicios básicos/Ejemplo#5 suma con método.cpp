/* 
  Nombre:Prueba5.cpp
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

double sumaTotal(double, double);//se define el m�todo sumaTotal, que permite sumar dos n�meros
int main(){
	double num1, num2, suma;
	cout<<"digite el primer n�mero"<<endl;
	cin>>num1;
	
	cout<<"digite el segundo n�mero"<<endl;
	cin>>num2;
	cout<<"la suma es: "<<sumaTotal(num1,num2)<<endl;
	
	system("pause");
}

double sumaTotal(double a, double b){  //a= num1, b= num2
	double suma;
	suma= a+b;
	return suma;
}



