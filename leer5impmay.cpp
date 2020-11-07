//Leer 5 numeros e imprimir el mayor
#include <iostream>
using namespace std;

int main()
{
    int a,x,m;

    m=-1;
    for(a=1;a<=5;a++)
    {
        cout << "Ingresa un numero positivo: ";
        cin >> x;
        if(x>m) m=x;
    }
    cout << "El numero mayor es: " << m;
}
