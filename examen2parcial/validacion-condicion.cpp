//Validacion / Condicion
#include <iostream>
using namespace std;

int main()
{
   int a,b;
    cout << "Ingresa un numero: ";
    cin >> a;
    cout << "Ingresa un numero mayor: ";
    cin >> b;

    while(a>=b)
    {
       cout << endl << "**NUMEROS INCORRECTOS**" << endl;
       cout << "Ingresa un numero: ";
       cin >> a;
       cout << "Ingresa un numero mayor: ";
       cin >> b;
    }

    if((b%a)==0)
        cout << endl << b << " es multiplo de " << a << endl ;
    else
        cout << endl << b << " no es multiplo de " << a << endl ;

   return 0;
}

