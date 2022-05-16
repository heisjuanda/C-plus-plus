/*
  Nombre: AreaTriangulo.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Menese Saldarriaga 
  Fecha Creacion: agosto 28 de 2020
  Fecha Modificación: agosto 28 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

#include "AreaTriangulo.h"
#include <math.h>

Area::~Area(){
	altura=0;
	base=0; 
	area=0;
	k=0;
}

Area::Area(double Area){
	otrovalor=Area;
}
double Area::calcularArea(double altura, double base,double k){
	
	area=altura*base/k;
	return area;
	
}
