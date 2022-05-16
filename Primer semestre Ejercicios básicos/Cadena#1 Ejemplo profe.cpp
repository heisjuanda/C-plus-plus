/*
  Nombre: cadena.cpp
  Autor: Juan David Moreno ALfonso
  Fecha Creacion: agosto 21 de 2020
  Fecha Modificaci?n: agosto 21 de 2020
  Versión : 1.0
  Email: juan.alfonso.toro@correounivalle.edu.co
*/

#include<iostream>
#include<string.h>

using std::string; ////Incluyendo la funcion de string para uso de caracteres
using std::cout;
using std::endl;


int main (){
	string A="Primera cadena";
	string B="Segunda cadena";
	string C="Tercera cadena";
	
	cout<<"=======================================" <<endl;
	cout<<"La cadena es: "<< A <<" "<< B <<" "<< C<<endl;
	
	if(A<B)
		cout<<"La cadena A es menor que la cadena B"<<endl;
	else 
		cout<<"La cadena A es mayor o igual que la cadena B"<<endl;
		
			
	cout<<"=======================================" <<endl;
	
	cout<<"La longitud de la cadena A es: "<<A.length()<<endl;
	cout<<"La longitud de la cadena B es: "<<B.length()<<endl;
	cout<<"La longitud  de la cadena C es: "<<C.length()<<endl;
	
	
	}

