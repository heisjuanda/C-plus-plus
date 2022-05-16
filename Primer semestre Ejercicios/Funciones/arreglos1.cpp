/* 
  Nombre:Punto 1 numeral B.cpp
  Autor: Juan David Moreno Alfonso 
  Fecha Creación: Septiembre 12 de 2020
  Fecha de Modificación: Septiembre 12 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co 
*/  

//Se incluye bibliotecas  

#include <stdio.h>
#include <string.h>
#include <iostream>
#include<conio.h>
using std::cout; //Incluyendo la función cout para imprimir en pantalla.
using std::cin;  //Sirve para pedir datos al usuario
using std::endl; //sirve para saltos de línea
using std::string;//sirve para definir datos string

int main(){
   int n;
   
   int pos;
   cout << "Digite el tamaño del vector: ";
   cin>>n;
   
   
   int datos[n];
   int inverso[n];
   
   for(int i=0;i<n ;i++){
    cout<<"Digie el numero ";
    cout<<i+1;
    cout<<" ";
    cin>>datos[i];
    
   }
   
   pos = n;
   for(int j=0;j<n;j++){
    inverso[j]=datos[pos-1];
    pos--;
    }
    
    for(int i=0;i<n;i++){
        cout<<datos[i];
        cout<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<inverso[i];
        cout<<" ";
    }   
    
}
