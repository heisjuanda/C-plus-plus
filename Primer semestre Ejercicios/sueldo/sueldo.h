#ifndef __CLASSSUELDO
#define __CLASSSUELDO

/*Clase: Sueldo.
  Responsabilidad: calcular el salario del empresario a partir de las horas trabajadas y el valor de la hora.
  Colaboración: no tiene relación con otras clases.
*/

 class Sueldo{
    private:
	double horas, salario, valorHoras; //se definen las variables
	
	public:
	Sueldo(double resulSueldo); //constructor 
	~Sueldo(); //destructor
	double calcularSueldo(double horas, double valorHoras); //metodo que calcula el sueldo
	double retornarValor();
};
 
#endif
