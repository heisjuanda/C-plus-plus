/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creaci�n: Septiembre 4 de 2020
  Fecha de Modificaci�n: Septiembre 4 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  


#include <iostream>
using std::cout; //Incluyendo la funci�n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l�nea
using std::string;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int a=0;
	cout<<"digite el valor de a"<<endl;
	cin>>a;
	
	switch(a){
		case 1:
			cout<<"el valor es 1"<<endl;
			break;
		case 2:
		    cout<<"el valor es 2"<<endl;
			break;
		default:
		    cout<<"el valor es "<<a<<endl;
		}
	system("pause");
	return 0;
	}
	
	

