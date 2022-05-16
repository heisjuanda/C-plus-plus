#include "lunes.h"
#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	animal Perro(17.5,true,"perro",10.2,15.3,10);
	animal gato(5.3,false,"gato",4.5,4.6,1.2);
	
	cout<<"el peso del perro es"<<endl;
	cout<<perro.getpeso()<<endl;
	
	perro.setpeso(20);
	cout<<"el peso del perro actualizado es "<<endl;
	cout<<perro.setpeso()<<endl;
	cout<<"el nombre del geto es; ";
	cout<<gato.getnombre()<<endl;
	
	if(gato.getpeso()>perro.getpeso()){
		cout<<"el gato es mas pesado que el perro"<<endl;
		
	}else{
		cout<<"el perro es mas pesado que el gato"<<endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
