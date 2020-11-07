//Copiar el contenido de un arreglo a otro. Imprimir el nuevo arreglo. Ej: a1 {1,2,3,4,5} -> a2 {1,2,3,4,5}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Cuantos numeros?: ";
    cin >> n;
    int numeros[n],numeros2[n];
    for(int i=0;i<n;i++)
    {
        cout << "Ingresa un numero: ";
        cin >> numeros[i];
    }
    cout << "Los numeros son: ";
    for(int i=0;i<n;i++)
    {
        numeros2[i]=numeros[i];
        if(i==n-1)
        cout << numeros2[n-1];
        else
        cout << numeros2[i] << ", ";
    }

}
