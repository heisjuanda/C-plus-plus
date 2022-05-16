#ifndef __CLASSHIPOTENUSA
#define __CLASSHIPOTENUSA

/*Clase: AreareaCirculo.
  Responsabilidad: calcular el valor del area a partir de su radio.
  Colaboraci�n: no tiene relaci�n con otras clases.
*/
 
 
 class Area{
    private:
	double pi, radio, area,otrovalor;
	
	
	public:
	Area(double Area); //constructor 
	~Area(); //destructor
	double calcularArea(double pi, double radio);
	double retornarValor();
};
 
#endif
