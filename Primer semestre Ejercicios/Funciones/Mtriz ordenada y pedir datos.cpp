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
	setlocale(LC_CTYPE, "Spanish");//para las tildes
    int numeros[100][100],filas,columnas;//variables definidas

    cout<<"Digite el numero de filas: "; //pidiendo datos al usuario
	cin>>filas;
    cout<<"Digite el numero de columnas: "; 
	cin>>columnas;

    //Rellenando la matriz  
    for(int i=0;i<filas;i++){//cilco for para las filas
        for(int j=0;j<columnas;j++){//for anidado para las columnas
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";//organizando datos
            cin>>numeros[i][j];//tomando los valores asignado a la matriz
        }
    }
    
    cout<<endl;
    cout<<"la matriz es: "<<endl;

    for(int i=0;i<filas;i++){//organizando matriz
        for(int j=0;j<columnas;j++){
            cout<<numeros[i][j];
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
