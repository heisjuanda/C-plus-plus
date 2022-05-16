/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Septiembre 4 de 2020
  Fecha de Modificación: Septiembre 4 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  


#include <iostream>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea
using std::string;


int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	string contra="";
	cout<<"digite contrseña"<<endl;
	cin>>contra;
	
	if(contra=="juandavid"){
		cout<<"la contraseña es correcta bienvenido"<<endl;
	}else{
		cout<<"la contraseña es incorrecta"<<endl;
	}
	
	system("pause");
	return 0;
}
