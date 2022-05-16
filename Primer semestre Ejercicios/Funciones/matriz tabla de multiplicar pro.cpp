/* 
  Nombre:Matriz tabla de multimplicar.cpp
  Autor: Juan David Moreno Alfonso
  Fecha Creaci?n: Septiembre 11 de 2020
  Fecha de Modificaci?n: Septiembre 11 de 2020
  Versi?n: 1.0
  Email: juan.alfonso@correounivalle.edu.co
*/  

//Se incluye bibliotecas  


#include <iostream>
using std::cout; //Incluyendo la funci?n cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de l?nea
using std::string;//sirve para definir datos string

int main(){
  setlocale(LC_CTYPE, "Spanish");//para las tildes
 
  cout<<"Las tablas de multiplicar del uno al 10 son: "<<endl<<endl;
  cout<<"la tabla del: 1"<<endl;//para que aparezca en la parte de la tabla del 1
  //for anidado
  int miMatriz[10][10];//se define la matriz 
  for(int i=0;i<10;i++){//for externo filas i
  
    for(int j=0; j<10;j++){//for interno para columnas j
    miMatriz[i][j]=(i+1)*(j+1);//oraganizando datos en la matriz e indicando lo que se debe hacer
    cout<< i+1 <<"x" <<j+1<<" : "  <<miMatriz[i][j]<<endl;//matriz imprimida
    }
    
    if(i<9){
  cout<<endl;  //condici?n para que no imprima m?s de la cuenta
  cout<<"La tabla de multiplicar del: ";
  cout<<i+2;//para que cuadren al imprimir
  }
  cout<<endl;//salto de l?nea

  }
  
  system("pause");
  return 0;
}
