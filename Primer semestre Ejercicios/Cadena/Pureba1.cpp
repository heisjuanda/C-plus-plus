/*
	Nombre:Caracteres.cpp
	Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
	Fecha creación: Agosto 28 de 2020
	Fecha modificación: Agosto 28 de 2020
	Versión: 1.0
	Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

//Se incluye bibliotecas

#include <iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using std::cout; // Inlcluyendo la función de cout para imprimir por pantalla.
using std::cin; // Inlcluyendo la función de cint para pedir datos
using std::endl;  // Inlcluyendo la función de endl saltos de línea 

int main(){
	char palabra1[80];
	char palabra2[]="Univalle";
	char palabra3[80];
	
	cout<<"digite una palabra"<<endl;
	gets(palabra1);
	
	cout<<"digite otra palabra"<<endl;
	gets(palabra3);
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Esta univalle_";
	}if(strcmp(palabra2,palabra3)==0){
		cout<<"Esta univalle_";
	}else{
		cout<<"No Esta univalle_";
	}
	cout<<palabra1;
	cout<<palabra3;
	cout<<palabra2;
	
	getch();
	return 0;
	
}
