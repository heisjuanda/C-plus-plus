/*
	Nombre:Caracteres.cpp
	Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
	Fecha creaci�n: Agosto 28 de 2020
	Fecha modificaci�n: Agosto 28 de 2020
	Versi�n: 1.0
	Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

//Se incluye bibliotecas

#include <iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using std::cout; // Inlcluyendo la funci�n de cout para imprimir por pantalla.
using std::cin; // Inlcluyendo la funci�n de cint para pedir datos
using std::endl;  // Inlcluyendo la funci�n de endl saltos de l�nea 

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
