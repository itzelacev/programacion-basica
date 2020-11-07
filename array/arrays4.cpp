//Llenar en tiempo de ejecución un arreglo de 5 elementos con números pares consecutivos. Imprimir el arreglo.
#include <iostream>
using namespace std;

int main()
{
    int n,par=0;
    cout << "Ingresa n: ";
    cin >> n;
    int pares[n];
    for(int i=0;i<n;i++)
    {
        par+=2;
        pares[i]=par;
        cout << pares[i] << endl;
    }
}
