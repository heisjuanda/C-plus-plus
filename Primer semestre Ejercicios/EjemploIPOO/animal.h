
/*
*  Sebastian Giron Arcila
*/
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;



class Animal{
	
	private:
		double peso;
		bool pelaje;
		string nombre;
		double largo;
		double alto;
		double profundidad;
	
	public:
		Animal(double pesoAn,bool pelajeAn, string nombreAn, double largoAn,double altoAn, double profundidadAn);
		~Animal();
		double getPeso();
		string getNombre();
		void setPeso(double pesoAn);
		void setNombre(string nombreAn);
		
		
		
		    
	
};

#endif





