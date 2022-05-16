/* 
  Nombre:Punto 1 numeral B.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
  Fecha Creación: Septiembre 12 de 2020
  Fecha de Modificación: Septiembre 12 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/  

//Se incluye bibliotecas  

#include <stdio.h>
#include <string.h>
#include <iostream>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea
using std::string;//sirve para definir datos string

bool primo(int n){
	bool condicion;
	if(n!=1&&n!=0){
		for(int i=2;i<=20;i++){
			if(n%i==0){
				if(n==i){
					condicion=true;
				}else{
					condicion=false;
					return condicion;
				}
			}
		}
	}else{
		condicion=false;
	} 
	return condicion;
}

int main(){
  setlocale(LC_CTYPE, "Spanish");//para las tildes 
  
  cout<<"Números pares hasta el número 250"<<endl;
  for(int i=0;i<=10;i=i+2){
  	cout<<i<<endl;
  }
  
  cout<<endl;
  cout<<"Números multiplos de 5 hasta el número 100"<<endl;
  for(int i=0;i<=500;i=i+5){
  	cout<<i<<endl;
  }
  
  cout<<endl;
  cout<<"Números primos"<<endl;
  int p=0; 
  for(int i=0;i<=20;i++){
  	if(primo(i)){
  		cout<<i<<endl;
	  }
  }
  
  
  
  cout<<endl;
  int c=0;
  cout<<"Suma números pares hasta 80"<<endl;
  for(int i=0;i<=80;i=i+2){
  	c+=i;
  }cout<<c<<endl;
  
  
  cout<<endl;
  cout<<"Contar la letra 'a' "<<endl;
  char frase[]="C++ es un lenguaje de programación diseñado en 1979 por Bjarne Stroustrup. La intención de su creación fue extender al lenguaje de programación C mecanismos que permiten la manipulación de objetos";
  int letraA=0;
  
  for(int i=0;i<=500;i++){
  	switch(frase[i]){
  		case 'a': letraA++;
  		break;
	  }
  }
  cout<<"la letra A esta estas veces: ";
  cout<<letraA<<endl;


  
  
  
  system("pause");
  return 0;
}


