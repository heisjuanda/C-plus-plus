/* 
  Nombre:Primer if().cpp
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

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int a,b,c;
	cout<<"ingrese un valor para a"<<endl;
	cin>>a;
		cout<<"ingrese un valor para b"<<endl;
	cin>>b;
		cout<<"ingrese un valor para c"<<endl;
	cin>>c;
	
	if(a==b){
		if(a==c){
			cout<<"son iguales"<<endl;
		}else{
			cout<<"c es diferente"<<endl;
		}
	}else{
		cout<<"son diferentes"<<endl;
	}
	
	system("pause");
	return 0;
}
