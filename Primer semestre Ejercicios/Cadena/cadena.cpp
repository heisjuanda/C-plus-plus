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
using std::cout; // Inlcluyendo la función de cout para imprimir por pantalla.
using std::cin; // Inlcluyendo la función de cint para pedir datos
using std::endl;  // Inlcluyendo la función de endl saltos de línea 

int main(){
	char *busqueda=NULL;
	char *cadena1="buscar ";
	char *cadena2="Univalle";
	buscar_cadena(cadena1,cadena2);
	if(busqueda != Null){
		printf("se encontro la cadena %s\n",cadena2);
	}else{
		printf("No se encontro %s\n",cadena2);
	}
}

char* buscar_cadena(char *str1,char*str2){
	int len1=strlen(str1);
	int len2=strlen(str2);
	if(len2>len1){
	printf("la cadena 2 es mas grande ");
	return NULL;
	}else{
		i=0;
		c=str2[0];
		while(i<len1/* strl[i] != '\0'*/){
			if(str1[i]==c){
				if(strncmp(&str1[i],str2,len2)==0)
				return &str1[i];
			}
			i++;
		}
		return NULL;
	}
	
	
}


