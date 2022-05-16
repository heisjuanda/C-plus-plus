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
	char frase[50];
	char busqueda[]=" Univalle";
	char frase1[50];
	
	cout<<"digite la primera frase "<<endl;
	gets(frase);
	
	cout<<"digite otra frase"<<endl;
	gets(frase1);
	
	
	
	cout<<frase;
	cout<<frase1;
	cout<<busqueda;
	
	system("pause");
	return 0;
}
