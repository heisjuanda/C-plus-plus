#include "lunes.h"

animal::animal(double pesoAnimal,bool pelajeAn, string nombreAn, double largoAn, double altoAn, double profundidadAn){
//variable de la clase = valor que llega
	peso=pesoAn;   
	pelaje=pelajeAn;
	nombre=nombreAn;
	largo=largoAn;
	altura=alturaAn;
	profundidad=profundidadAn;
	
	
	
}
 animal::~animal(){
 	cout<<"Estoy muerto"<<endl;
 	peso=0;
 	pelaje=false;
 	nombre=" ";
 	largo=0;
 	alto=0;
 	profundidad=0;
 }
 
 double animal::getpeso(){
 	return peso;
 }
void animal::getpeso(){
	peso=pesoAn;
}

string animal::getnomnre(){
	return nombre;
}

void animal::setnombre(string nombreAn){
	nombre=
}
