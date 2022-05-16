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
	cout<<"sin ciclos"<<endl;
  cout<<1<<endl;
  cout<<2<<endl;
  cout<<3<<endl;
  cout<<4<<endl;
  cout<<5<<endl;
  
  cout<<"for"<<endl;
  for(int i=1;i<=10;i+=1){
  	cout<<i<<endl;
  }
    
  cout<<"while"<<endl;
    double i=0;
    while(i<=10){
    	cout<<i<<endl;
    	i+=1;    	
	} 
   
   cout<<"do while"<<endl;
    do{
    	cout<<i<<endl;
    	i+=1;
	}while(i<=10);


system("pause");
return 0;
}


