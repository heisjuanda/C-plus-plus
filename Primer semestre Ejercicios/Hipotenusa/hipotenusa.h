#ifndef __CLASSHIPOTENUSA
#define __CLASSHIPOTENUSA

/*Clase: Hipotenusa.
  Responsabilidad: calcular el valor de la hipotenusa a partir de sus lados.
  Colaboraci�n: no tiene relaci�n con otras clases.
*/
 // Aqui viene todo el contenido del archivo nombreclase.h
 
 class Hipotenusa{
    private:
	double cateto_a, cateto_b, valorHipo, otroValor;
	
	
	public:
	Hipotenusa(double resulHipo); //constructor 
	~Hipotenusa(); //destructor
	double calcularHipotenusa(double cateto_a, double cateto_b);
	double retornarValor();
};
 
#endif

