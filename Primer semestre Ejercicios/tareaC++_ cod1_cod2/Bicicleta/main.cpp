/* 
  Nombre:bicicleta.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
  Fecha Creación: Septiembre 12 de 2020
  Fecha de Modificación: Septiembre 12 de 2020
  Versión: 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

//se incluyen librerias

#include <iostream>
#include "bicicleta.h"

using std::cout;//incluyendo la función cout para imprimir en pantalla
using std::cin;//sirve para pedir datos al usuario
using std::endl;//sirve para saltos de línea

int main()
{
  int x,y;//se crean las variables x e y que tomaran los valores de coordenadas
  cout<<"Ingrese el valor de la coordenada x"<<endl;
  cin>>x;
  
  cout<<"Ingrese el valor de la coordenada y"<<endl;
  cin>>y;
  
  Bicicleta miBicicleta(0, 0);//se da una coordenada inicial a la bicicleta
  miBicicleta.irHasta(x, y);//se crea una coordenada dada por el usuario
  cout << "Hoy has pedaleado " << miBicicleta.kilometrosRecorridos() << endl;

  system("pause");
  return 0;
}
