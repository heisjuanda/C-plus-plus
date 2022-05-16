/* 
  Nombre:bicicleta.cpp
  Autor: Juan David Moreno Alfonso y Juan Camilo Meneses Saldarriaga
  Fecha Creaci�n: Septiembre 12 de 2020
  Fecha de Modificaci�n: Septiembre 12 de 2020
  Versi�n: 1.0
  Email: juan.alfonso@correounivalle.edu.co y juan.camilo.meneses@correounivalle.edu.co
*/

//se incluyen librerias
 
#include "bicicleta.h"
#include <math.h> 
     
Bicicleta::Bicicleta(int x, int y)//se llama al constructor
{
  distancia= x, y;
}

void Bicicleta::irHasta(int x, int y)//se llama a el metodo irHasta que calcula la distancia recorrida
{
  distancia += sqrt(pow(posicionX - x, 2) + pow(posicionY - y, 2));
  posicionX = x;
  posicionY = y;
}

Bicicleta::~Bicicleta()//se llama al destructor
{
  distancia=0;
  posicionX=0;
  posicionY=0;
}

double Bicicleta::kilometrosRecorridos()//se almacena la distancia en nuestro atributo kilometrosRecorridos
{
  return distancia;
}
