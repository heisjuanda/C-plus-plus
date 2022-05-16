/* 
  Nombre:Prueba5.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creación: Agosto 21 de 2020
  Fecha de Modificación: Agosto 21 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  
 
#include <iostream>
 
using namespace std;
 
void suma(double n1, double n2){
    double resultado;
    resultado = n1+n2;
    cout << "El resultado es: ";
    cout << resultado;
}
 
void resta(double n1, double n2){
    double resultado;
    resultado = n1-n2;
    cout << "El resultado es: ";
    cout << resultado;
}
 
void multiplicacion(double n1, double n2){
    double resultado;
    resultado = n1*n2;
    cout << "El resultado es: ";
    cout << resultado;
}
 
void division(double n1, double n2){
    double resultado;
    resultado = n1/n2;
    cout << "El resultado es: ";
    cout << resultado;
}
 
int main(){
    double numero1;
    double numero2;
    char operacion;
    
    cout <<"Digite el numero uno: ";
    cin >> numero1;
    
    cout <<"Digite el numero dos: ";
    cin >> numero2;
    
    cout <<"Digite la operacion: ";
    cin >> operacion;
    
    if(operacion == '+'){
        suma(numero1, numero2);
    }else if(operacion == '-'){
        resta(numero1, numero2);
    }else if(operacion == '*'){
        multiplicacion(numero1, numero2);
    }else if(operacion == '/'){
        division(numero1, numero2);
    }else{
        cout << "Esta operacion no existe"<<endl;
    }
    
 
    switch(operacion){
		case '+':
			suma(numero1, numero2);
			break;
		
		case '-':
			resta(numero1 , numero2);
			break;
		
		case '*':
			multiplicacion(numero1, numero2);
			break;
			
		case '/':
			division(numero1, numero2);
			break;
		
		default:
			cout<<"no existe esta operacion";
			
		
	}
	
	

	
	
}
    
}
