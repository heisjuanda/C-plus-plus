/*
  Nombre: AreaTriangulo.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Menese Saldarriaga 
  Fecha Creacion: agosto 28 de 2020
  Fecha Modificación: agosto 28 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

#include "AreaTriangulo.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main (){
	double a,b,k=2;
	Area miTriangulo=Area(12); 
	cout<<"Digite el valor de la altura "<<endl;
	cin>> a;
	cout<<"Digite el valor de la base "<<endl;
	cin>> b;
	
	cout<<"El valor del area es: "<<miTriangulo.calcularArea(a, b, k)<< endl;
	system("pause");
	
}
