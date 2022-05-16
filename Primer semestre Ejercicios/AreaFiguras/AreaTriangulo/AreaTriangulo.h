#ifndef __CLASSHIPOTENUSA
#define __CLASSHIPOTENUSA

/*Clase: AreaTriangulo.
  Responsabilidad: calcular el valor del area a partir de su la y altura.
  Colaboración: no tiene relación con otras clases.
*/
 
 
 class Area{
    private:
	double altura,base,area,otrovalor,k;
	
	public:
	Area(double Area); //constructor 
	~Area(); //destructor
	double calcularArea(double altura, double base,double k);
	double retornarValor();
};
 
#endif
