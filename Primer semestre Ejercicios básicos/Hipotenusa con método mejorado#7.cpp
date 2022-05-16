/* 
  Nombre:Prueba5.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Agosto 28 de 2020
  Fecha de Modificación: Agosto 28 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  
 
#include <iostream>
#include <math.h>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

class Hipotenusa{
    public:
	double cateto_a, cateto_b, valorHipo;
	double calcularHipotenusa(double cateto_a, double cateto_b);
};

double Hipotenusa::calcularHipotenusa(double cateto_a, double cateto_b){
	
	valorHipo= sqrt(pow(cateto_a, 2) + (pow (cateto_b, 2)) );
	return valorHipo;
	
}

int main (){
	Hipotenusa miHipo;
	Hipotenusa miCasa; // se crea el objeto miHipo de la clase Hipotenusa
	double a, b;
	cout<<"Digite el valor del cateto a"<<endl;
	cin>> a;
	
	cout<<"Digite el valor del cateto b"<<endl;
	cin>> b;
	
	cout<<"El valor de la hipotenusa es:"<<miHipo.calcularHipotenusa(a, b)<< endl;
	cout<<"El valor de la hipotenusa de mi casa es:"<<miCasa.calcularHipotenusa(3, 6)<< endl; // se pase el mensaje del objeto
	system("pause");
	
}

