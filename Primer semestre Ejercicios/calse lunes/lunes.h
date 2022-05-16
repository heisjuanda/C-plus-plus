/* 
  Nombre:Prueba5.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Agosto 31 de 2020
  Fecha de Modificación: Agosto 31 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/ 
#ifndef "lunes.h"
#define lunes.h
#include<iostream>

using namespace std;

class animal{
	private:
	double peso;
	bool pelaje;
	string nombre;
	double largo;
	double alto;
	double profundidad;
	
	public:
		animal(double pesoAnimal,bool pelajeAn, string nombreAn, double largoAn, double altoAn, double profundidadAn);
		~animal();
		double getpeso();
		string getnombre();
		void setpeso(double pesoAn);
	    void setnombre(string nombreAn); 
	
}



