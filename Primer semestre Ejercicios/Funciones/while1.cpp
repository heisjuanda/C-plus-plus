/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creaci�n: Septiembre 11 de 2020
  Fecha de Modificaci�n: Septiembre 11 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  


#include <iostream>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea
using std::string;//sirve para definir datos string

int main(){
  setlocale(LC_CTYPE, "Spanish");
  //no tiene valor de partida, solo condici�n 
  int i=0;
  cout<<"digite un valor para la condici�n"<<endl;
  cin>>i;
  
  while(i>=10&&i<=100){
  	cout<<"digite un n�mero: "<<endl;
  	cin>>i;
  }
  
  
  system("pause");
  return 0;
}
