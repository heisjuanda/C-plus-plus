/*
  Nombre: AreaRectangulo.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Menese Saldarriaga 
  Fecha Creacion: agosto 28 de 2020
  Fecha Modificación: agosto 28 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

#include "AreaRectangulo.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main (){
	double a,b;
	Area miRectangulo=Area(12); 
	cout<<"Digite el valor de la altura "<<endl;
	cin>> a;
	cout<<"Digite el valor de la base "<<endl;
	cin>> b;
	
	cout<<"El valor del area es: "<<miRectangulo.calcularArea(a, b)<< endl;
	system("pause");
	
}
