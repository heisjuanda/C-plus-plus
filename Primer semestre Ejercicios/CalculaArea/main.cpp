

#include <iostream>

using namespace std;

#include "calculaArea.h"




int main()
{
	double radio;
	double lado;
	
	CalculaArea calculista=CalculaArea(30);
	
	cout << "Yo se calcular areas de circulos" << endl;
	cout << "dame un radio: ";
	cin >> radio;
	
	cout << "El area de tu circulo es: ";
	cout << calculista.areaCirculo(radio) << endl;
	
	
	cout << "Tambien se calcular areas de cuadrados" << endl;
	cout << "dame un lado: ";
	cin >> lado;
	
	cout << "El area de tu cuadrado es: ";
	cout << calculista.areaCuadrado(lado) << endl;
	
	cout << "Si necesitas referencias, mi cedula es: ";
	cout << calculista.dameCedula() << endl;
	
	return 0;//indica que no hay errores
}

