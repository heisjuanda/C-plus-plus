/*
  Nombre: hipotenusa.cpp
  Autor: Luis Germán Toro Pareja
  Fecha Creacion: agosto 28 de 2020
  Fecha Modificación: agosto 28 de 2020
  Versión : 1.0
  Email: luis.german.toro@correounivalle.edu.co
*/

#include "hipotenusa.h"
#include <math.h>

Hipotenusa::~Hipotenusa(){
	cateto_a=0;
	cateto_b=0; 
	valorHipo=0;
}

Hipotenusa::Hipotenusa(double resulHipo){
	otroValor=resulHipo;
}
double Hipotenusa::calcularHipotenusa(double cateto_a, double cateto_b){
	
	valorHipo= sqrt(pow(cateto_a, 2) + (pow (cateto_b, 2)) );
	return valorHipo;
	
}

double Hipotenusa::retornarValor()
{
	return otroValor; 
}
