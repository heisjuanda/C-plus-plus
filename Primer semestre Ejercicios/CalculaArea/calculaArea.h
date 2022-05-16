


#ifndef __CLASSCALCULAAREA
#define __CLASSCALCULAAREA


#include <math.h>   // Para poder usar pow() y sqrt() en calcularArea.cpp

class CalculaArea
{
	
	private:
		int cedula;
	
	public:
		CalculaArea(int cc);
		~CalculaArea();
		double areaCirculo(double radio);
		double areaCuadrado(double lado);
		int dameCedula();
};//Aqui estaba el error. Faltaba el ; 

// Aqui se cierra la guarda:
#endif
