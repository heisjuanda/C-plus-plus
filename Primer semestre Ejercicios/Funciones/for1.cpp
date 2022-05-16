/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Septiembre 11 de 2020
  Fecha de Modificación: Septiembre 11 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  


#include <iostream>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea
using std::string;//sirve para definir datos string

int main(){

  setlocale(LC_CTYPE, "Spanish");
  
  for(int i=0;i<=250;i=i+5){
  	cout<<i<<endl;
  }
  
  
  for(int i=0;i<=8;i=i+2){
  	cout<<i<<endl;
  }
  
  for(int i=0;i<=10;i=i+2){
  	cout<<i<<endl;
  }
  
   for(int i=0;i<=10;i=i+1){
  	cout<<i<<endl;
  }
  
  
   for(int i=10;i>=0;i=i-1){
  	cout<<i<<endl;
  }
  
  cout<<"con contadores bien potentes"<<endl;
  
  int contador=0;
  for(int i=0 ;i<200;i++){
  	if(i%2==0){
  		contador++;
  		cout<<contador<<endl;
	  }
  }
  
  
  system("pause");
  return 0;
}
