/*
  Nombre: AreaCirculo.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Menese Saldarriaga 
  Fecha Creacion: agosto 28 de 2020
  Fecha Modificación: agosto 28 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

#include "AreaCirculo.h"
#include <math.h>

Area::~Area(){
	radio=0;
	pi=3.14159265359; 
	area=0;
}

Area::Area(double Area){
	otrovalor=Area;
}
double Area::calcularArea(double radio, double pi){
	
	area=pow(radio,2)*pi;
	return area;
	
}

double Area::retornarValor()
{
	return otrovalor; 
}
