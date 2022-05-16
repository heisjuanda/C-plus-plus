

//Incluimos la cabecera de esta clase, donde se declararon los metodos
//que se van a implementar en el cpp
#include "calculaArea.h"


CalculaArea::CalculaArea(int cc)
{
	cedula = cc;
}

CalculaArea::~CalculaArea()
{
}

double CalculaArea::areaCirculo(double radio)
{
	double area;
	area = 3.14*pow(radio,2);
	
	return area;
}


double CalculaArea::areaCuadrado(double lado)
{
	double area;
	area = pow(lado, 2);
	
	return area;
}


int CalculaArea::dameCedula()
{
	return cedula;
}

