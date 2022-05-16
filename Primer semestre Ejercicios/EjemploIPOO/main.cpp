#include "animal.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	Animal perro(17.5,true,"perro",10.2,15.3,10);
	Animal gato(5.3,false,"gato",4.5,4.6,1.2);
	
	
	cout << "El peso del perro es: ";
	cout << perro.getPeso() <<endl;
	
	perro.setPeso(20);
	
	cout << "El peso actualizado del perro es: ";
	cout << perro.getPeso() <<endl;
	
	gato.setNombre("gato con botas");
	
	cout << "el nombre del gato es: ";
	cout << gato.getNombre() <<endl;
	
	gato.setPeso(30);
	
	if(gato.getPeso() > perro.getPeso()){
		cout << "El gato es mas pesado que el perro" << endl;
	}else{
		cout << "El perro es mas pesado que el gato" << endl;
	}
	
	
	
	
}
