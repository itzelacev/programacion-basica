//Leer un numero n e imprimir el resultado de 2^n
#include <iostream>
using namespace std;

int main()
{
    int i,n,r;

    cout << "**2 a la n**" << endl;
    cout << "Ingresa n: ";
    cin >> n;
    i=1;
    r=2;
    switch(n)
    {
    case 0:
       cout << "2^" << n << " es: " << 1;
       break;
    case 1:
        cout << "2^" << n << " es: " << 2;
        break;
    default:
    while(i!=n)
    {
        i++;
        r=r*2;
    }
    cout << "2^" << n << " es: " << r;
    }
    return 0;
}
