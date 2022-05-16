/*
  Nombre: sueldo.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creacion: septiembre 04 de 2020
  Fecha Modificación: septiembre 04 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/
#include "sueldo.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main (){
	double a, b;
	Sueldo miSueldo=0; //creacion del objeto
	cout<<"Digite la cantidad de horas trabajadas"<<endl; // se introducen las horas trabajadas
	cin>> a;
	
	cout<<"Digite el valor de la hora en su trabajo"<<endl; // se introduce el valor de las horas
	cin>> b;
	
	cout<<"Su sueldo es de: "<<miSueldo.calcularSueldo(a,b)<< endl; //el objeto llama a el metodo para calcular el sueldo
	system("pause");
}
