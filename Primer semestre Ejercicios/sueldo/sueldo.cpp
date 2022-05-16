/*
  Nombre: sueldo.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creacion: septiembre 04 de 2020
  Fecha Modificación: septiembre 04 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/

#include "sueldo.h"
#include <math.h>

Sueldo::~Sueldo(){ //se llama al destructor
	valorHoras=0;
	horas=0;
	salario=0;
}

Sueldo::Sueldo(double resulSueldo){ //se llama al constructor
	salario=resulSueldo;
}
double Sueldo::calcularSueldo(double horas, double valorHoras){ //metodo que calcula el sueldo
	
	if(horas<40){ //condicion si se trabajan menos de 40 horas
		salario=horas*valorHoras;
		return salario;
	}else{ //condicion si se trabajan 40 o mas horas
		salario=(horas*valorHoras)+((horas-40)*(2*valorHoras));
		return salario;
	}
}

double Sueldo::retornarValor() //funcion que retorna nuestro salario
{
	return salario; 
}
