#include <iostream>
using namespace std;

int main ()
{
	int poblacionA = 480, poblacionB = 800, contador = 1;
	int tazaA=0, tazaB=0;
	
	cout << "\n\n\t------------------------A" << char(165) << "O 1 ------------------------" << endl << endl;
	cout << "\t El numero de habitantes de ambas poblaciones es de: \n\n";
	cout << "  \t     Poblacion A        Poblacion B\n";
	cout << "\t\t" << poblacionA << "\t\t   " << poblacionB << endl << endl;
	
	while(poblacionA < poblacionB)
	{
		tazaA = (poblacionA * 0.06) + poblacionA;	
		poblacionA = tazaA;
		
		tazaB = (poblacionB * 0.03) + poblacionB;
		poblacionB = tazaB;
		
		contador++;
		
		cout << "\t------------------------ A" << char(165) << "O " << contador << " ------------------------"  << endl;
		cout << "\n\t El numero de habitantes de ambas poblaciones es de: \n\n";
		cout << "  \t     Poblacion A        Poblacion B\n";
		cout << "\t\t" << tazaA << "\t\t   " << tazaB<< endl << endl;
	}
	
	cout << "\t--------------------------------------------------------------" << endl;
	cout << "\t El numero de a" << char(164) << "os transcurridos es de: " << contador << endl;
	
	return 0;
}
