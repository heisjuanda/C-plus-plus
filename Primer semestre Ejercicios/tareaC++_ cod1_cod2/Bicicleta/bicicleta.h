#ifndef __CLASSBICICLETA
#define __CLASSBICICLETA

/*Clase: Bicicleta.
  Responsabilidad: calcular la distancia recorrida por la bicicleta
  Colaboración: no tiene relación con otras clases
*/

//se incluyen librerias

#include <math.h>   

class Bicicleta//se crea la clase
{
  private:                   
       double distancia,posicionX,posicionY;//se definen las variables
  public:                       
    Bicicleta(int x, int y);//se crea el constructor
	~Bicicleta();//se crea el destructor
                  
    void irHasta(int x, int y);//se crea el metodo irHasta el cual calcula la distancia recorrida
    double kilometrosRecorridos();//se crea un atributo el cual almacenara nuestro resultado
};

#endif
