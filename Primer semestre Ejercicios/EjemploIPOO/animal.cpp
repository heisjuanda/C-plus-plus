#include "animal.h"

Animal::Animal(double pesoAn,bool pelajeAn, string nombreAn, double largoAn,double altoAn, double profundidadAn){
	//variable de la clase = valor que llega
	peso = pesoAn;
	pelaje = pelajeAn;
	nombre = nombreAn;
	largo = largoAn;
	alto = altoAn;
	profundidad = profundidadAn;
	
	
	
	
}

Animal::~Animal(){
	cout << "Estoy muerto" << endl;
	peso=0.0;
	pelaje= false;
	nombre = " ";
	largo = 0.0;
	alto = 0.0;
	profundidad = 0.0;
}

double Animal::getPeso(){
	return peso;
}

void Animal::setPeso(double pesoAn){
	peso = pesoAn;
}

string Animal::getNombre(){
	return nombre;
}

void Animal::setNombre(string nombreAn){
	nombre = nombreAn;	
}

