#ifndef __CLASSHIPOTENUSA
#define __CLASSHIPOTENUSA

class Salario{
    private:
	double horas,valorh,otrovalor,salario;
	
	public:
	Salario(double Salario); //constructor 
	~Salario(); //destructor
	double calcularSalario(double horas, double valorh);
	double retornarValor();
};
 
#endif
