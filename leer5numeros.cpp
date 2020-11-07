//Leer 5 numeros e imprimir su suma
#include <iostream>
using namespace std;

int main()
{
    int a,x,s;

    s=0;
    for(a=1;a<=5;a++)
    {
        cout << "Ingresa un numero: ";
        cin >> x;
        s=s+x;
    }
    cout << "La suma de los numeros es igual a: " << s;
}
