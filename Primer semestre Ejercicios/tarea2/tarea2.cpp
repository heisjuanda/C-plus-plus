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
#include<conio.h>


Salario::~Salario(){
   horas=0;
   valorh=0;
}

Salario::Salario(double Salario){
	otrovalor=Salario;
}

double Salario::calcularSalario(double horas, double valorh){
	
	if(horas<=40){
		horas*valorh;
	}else{
		if(horas>40){
		(40*valorh)+((horas-40)*(2*valorh));
		}
		
		
		
	}
	
	
	return salario;
	
}
