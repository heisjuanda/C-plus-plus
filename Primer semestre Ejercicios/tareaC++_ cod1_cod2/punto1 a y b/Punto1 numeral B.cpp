/* 
  Nombre:Punto 1 numeral B.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
  Fecha Creaci�n: Septiembre 12 de 2020
  Fecha de Modificaci�n: Septiembre 12 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/  

//Se incluye bibliotecas  

#include <stdio.h>
#include <string.h>
#include <iostream>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea
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
  
  cout<<"N�meros pares hasta el n�mero 250"<<endl;
  for(int i=0;i<=10;i=i+2){
  	cout<<i<<endl;
  }
  
  cout<<endl;
  cout<<"N�meros multiplos de 5 hasta el n�mero 100"<<endl;
  for(int i=0;i<=500;i=i+5){
  	cout<<i<<endl;
  }
  
  cout<<endl;
  cout<<"N�meros primos"<<endl;
  int p=0; 
  for(int i=0;i<=20;i++){
  	if(primo(i)){
  		cout<<i<<endl;
	  }
  }
  
  
  
  cout<<endl;
  int c=0;
  cout<<"Suma n�meros pares hasta 80"<<endl;
  for(int i=0;i<=80;i=i+2){
  	c+=i;
  }cout<<c<<endl;
  
  
  cout<<endl;
  cout<<"Contar la letra 'a' "<<endl;
  char frase[]="C++ es un lenguaje de programaci�n dise�ado en 1979 por Bjarne Stroustrup. La intenci�n de su creaci�n fue extender al lenguaje de programaci�n C mecanismos que permiten la manipulaci�n de objetos";
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


