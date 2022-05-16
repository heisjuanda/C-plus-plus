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
  //no tiene valor de partida, solo condición 
  int i=0;
  cout<<"digite un valor para la condición"<<endl;
  cin>>i;
  
  while(i>=10&&i<=100){
  	cout<<"digite un número: "<<endl;
  	cin>>i;
  }
  
  
  system("pause");
  return 0;
}
