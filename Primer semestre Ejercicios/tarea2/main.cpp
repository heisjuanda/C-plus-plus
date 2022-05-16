#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
  Nombre: Saldotrbajador.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Menese Saldarriaga 
  Fecha Creacion:  04 de septiembre de 2020
  Fecha Modificación: 04 de septiembre de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

#include "tarea2.h"
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char** argv) {

	double a,b;
	Salario miSalario=Salario(56); 
	cout<<"Digite la cantidad de las horas "<<endl;
	cin>> a;
	cout<<"Digite el valor de las horas"<<endl;
	cin>> b;
	
	cout<<"El salario es: "<<miSalario.calcularSalario(a,b)<< endl;

	

	
	
	system("pause");
	return 0;
}
