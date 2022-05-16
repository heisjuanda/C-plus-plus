/*
  Nombre: NúmerosPares.cpp
  Autor: Juan David Moreno Alfonso 
  Fecha Creacion: octubre 2 de 2020
  Fecha Modificación: octubre 2 de 2020
  Versión : 1.0
  Email: juan.alfonso@correounivalle.edu.co 
*/


#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
	 setlocale(LC_CTYPE, "Spanish");//para las tildes 
	  cout<<"Números pares hasta el número 10"<<endl;
  for(int i=0;i<=10;i=i+2){
  	cout<<i<<endl;
  }
  system("pause");
  return 0;
	
	
}
