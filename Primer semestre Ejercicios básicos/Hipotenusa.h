#ifndef_CLASSHIPOTENUSA
#DEFINE_CLASSHIPOTENUSA
/*
clase: Hipotenusa
Responsabilidad: Calcula el valor de la Hipotenusa
Colaboración: No tiene relaciones
*/
//contenido del archivo
class Hipotenusa{
	protected: 
	double cateto_a,cateto_b,valorHipotenusa;
	public:
		Hipotenusa();//constructor 
		~Hipotenusa();//destructor
	double calcularHipotenusa(double cateto_a, double cateto_b);
}
#endif


