/* 
  Nombre:Prueba4.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creaci�n: Agosto 21 de 2020
  Fecha de Modificaci�n: Agosto 21 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  
 
#include <iostream>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea

//calcular lalongitud de la circunferencia 
int main(){
	double pi=3.14159265359,r, longitud;
	cout<<"digite el radio"<<"\n";
	cin>>r;
	
	longitud= 2*r*3.14159265359;
	cout<<" la longitud es de: "<< longitud<<endl;
	system("pause");
}
