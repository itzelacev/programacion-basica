//Imprimir tabla de multiplicacion del 1 al 10 se�alada por el usuario
#include <iostream>
using namespace std;

int main()
{
    int x,a,b;

    cout << "Ingresa un numero: ";
    cin >> x;

        for (a=1;a<=10;a++)
        {
          b=x*a;
          cout << x << " x " << a << " = " << b << endl;
        }
}
