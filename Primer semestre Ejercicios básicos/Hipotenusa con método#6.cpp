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
#include <math.h>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea

double hipo(double,double);
int main(){
	double cateto1, cateto2, hipotenusa;
	cout<<"digite el valor cateto1 "<<endl;
	cin>>cateto1;
	
	cout<<"digite el valor cateto2 "<<endl;
	cin>>cateto2;
	cout<<"el resultado es "<<hipo(cateto1,cateto2)<<endl;
	
	system("pause");
}
double hipo(double a, double b){
	double hipo;
	hipo= sqrt(pow(a,2)+pow(b,2));
	return hipo;
}
