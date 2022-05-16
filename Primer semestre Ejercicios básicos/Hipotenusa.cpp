/* 
  Nombre:Hipotenusa.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Agosto 28 de 2020
  Fecha de Modificación: Agosto 28 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/ 
#include "Hipotenusa.h"
#include <math.h>
double Hipotenusa::calcularHipotenusa(double cateto_a,double cateto_b){
	double a,b;
	valorHipotenusa=sqrt(pow(cateto_a,2)+pow(cateto_b,2));
	return valorHipotenusa; 
}
