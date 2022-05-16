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
  
  //for anidado
  int miMatriz[3][3];//se define la matriz en c++
  for(int i=0;i<3;i++){//for externo i
  	for(int j=0; j<3;j++){//for interno para columnas j
  	
    miMatriz[i][j]=(i+1);
    cout<<miMatriz[i][j]<<endl;
      }
  
  }
 
 
 
  
  system("pause");
  return 0;
}
