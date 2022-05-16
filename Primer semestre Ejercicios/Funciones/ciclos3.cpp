/* 
  Nombre:Prueba2.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Septiembre 7 de 2020
  Fecha de Modificación: Septiembre 7 de 2020
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
	
	int resultado,a,b,q;
	resultado=0;
	
	cout<<"digite un numero"<<endl;
	cin>>a;
	
	cout<<"con el for da: "<<endl;
	
	for(int i=0;i<=a;i++){
		resultado+=i;
	}
	cout<<resultado<<endl;
	
	

	resultado=0;
	double i=0;
	cout<<"digite un numero"<<endl;
	cin>>b;
	while(i<=b){
		resultado+=i;
		i++;
	}
	cout<<"con el while da: "<<endl;
	cout<<resultado<<endl;
	
	
	resultado=0;
	double o=0;	
	cout<<"ingreseun valor"<<endl;
	cin>>q;
	do{
	 resultado+=o;
	 o++;
	}while(o<=q);
	cout<<"con el do while da: "<<endl;
	cout<<resultado<<endl;
	
	
	
	
	
	system("pause");
	return 0;
}
