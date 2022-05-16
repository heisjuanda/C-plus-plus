/* 
  Nombre:Prueba5.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Agosto 21 de 2020
  Fecha de Modificación: Agosto 21 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  
 
#include <iostream>
#include <math.h>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea

int main(){
 	double edad;
 	edad=0;
 	cout<<"Digite una edad"<<endl;
 	cin>>edad;
 	
 	if( edad>=0 && edad<=5 ){
 		cout<<"Es bebe"<<endl;
		 }else{
		 	if(edad>=6 && edad <=11){
		 		cout<<"Es niño"<<endl;
			 }else{
			 	if(edad>=12 && edad <= 17){
			 		cout<<"Es adolescente"<<endl;
				 }else{
				 	if(edad>= 18 && edad <= 30){
				 		cout<<"Es adulto Jóven"<<endl;
					 }else{
					 	cout<<"Es adulto Serio"<<endl;
					 }
				 }
			 }
		 }
 		
	 }
 	 
