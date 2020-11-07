#include <iostream>
using namespace std;

int man ()
{
	int base, potencia,n=1;
	
	cout << "Ingresa un numero base: ";
	cin >> base;
	cout << "Ingresa la potencia a elevar ese numero: ";
	cin >> potencia;
	
	for (int i = 1; i <= potencia; i++)
	{
		n=base*base;
	}
	
	cout << base;
	
	return 0;
}
