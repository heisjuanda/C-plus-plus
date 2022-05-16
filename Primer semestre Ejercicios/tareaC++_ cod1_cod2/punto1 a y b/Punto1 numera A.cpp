/* 
  Nombre:Punto 1 numeral A.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
  Fecha Creación: Septiembre 12 de 2020
  Fecha de Modificación: Septiembre 12 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/  

//Se incluye bibliotecas  


#include <iostream>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea
using std::string;//sirve para definir datos string

//Punto A parte 1
int main(){
  setlocale(LC_CTYPE, "Spanish");//para las tildes 
  
  double a,b,c,d;
  
  cout<<"digite valores y te dire cual es el mayor"<<endl<<endl;
  cout<<"digite el valor de a"<<endl;
  cin>>a;
  
  cout<<"digite el valor de b"<<endl;
  cin>>b;
  
  cout<<"digite el valor de c"<<endl;
  cin>>c;
  
  cout<<"digite el valor de d"<<endl;
  cin>>d;
  
  if(b<=a&&d<=a&&c<=a){
  	cout<<"El mayor es: "<<endl;
  	cout<<a<<endl;
  }else{
  	if(a<=b&&d<=b&&c<=b){
  		cout<<"El mayor es: "<<endl;
  		cout<<b<<endl;
	  }else{
	  	if(a<=c&&b<=c&&d<=c){
	  		cout<<"El mayor es: "<<endl;
	  		cout<<c<<endl;
		  }else{
		  	if(a<=d&&b<=d&&c<=d){
		  		cout<<"El mayor es: "<<endl;
		  		cout<<d<<endl;
			  }
		  }
	  }
  }
  
  
  cout<<endl;
  int x=0;
	cout<<"digite un número del 1 al 12 para encontrar los meses del año"<<endl;
	cin>>x;
	
	switch(x){
		case 1: cout<<"Enero"<<endl;
		break;
		case 2: cout<<"Febrero"<<endl;
		break;
		case 3: cout<<"Marzo"<<endl;
		break;
		case 4: cout<<"Abril"<<endl;
		break;
		case 5: cout<<"Mayo"<<endl;
		break; 
		case 6: cout<<"Junio"<<endl;
		break;
		case 7: cout<<"Julio"<<endl;
		break;
		case 8: cout<<"Agosto"<<endl;
		break;
		case 9: cout<<"Septiembre"<<endl;
		break;
		case 10: cout<<"Octubre"<<endl;
		break;
		case 11: cout<<"Noviembre"<<endl;
		break;
		case 12: cout<<"Diciembre"<<endl;
		break;
		default:
			cout<<"el valor númerico no es válido"<<endl;
	}
  
  
  
   system("pause");
  return 0;
}


