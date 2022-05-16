/*
  Nombre: AreaCirculo.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Menese Saldarriaga 
  Fecha Creacion: agosto 28 de 2020
  Fecha Modificación: agosto 28 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

#include "AreaCirculo.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main (){
	double a,b=3.141516;
	Area miCirculo=Area(12); 
	cout<<"Digite el valor del radio "<<endl;
	cin>> a;
	
	cout<<"El valor del area es: "<<miCirculo.calcularArea(a, b)<< endl;
	system("pause");
	
}

