//Copiar el contenido de un arreglo a otro, en orden invertido. Imprimir el nuevo arreglo. Ej: a1 {1,2,3,4,5} -> a2 {5,4,3,2,1}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "De cuantos numeros quieres tu arreglo?: ";
    cin >> n;

    int arreglo[n],arreglo2[n],j;
    j=n-1;
    for(int i=0;i<n;i++)
    {
        cout << "Ingresa un numero: ";
        cin >> arreglo[i];
    }
    for(int i=0;i<n;i++)
    {
        arreglo2[j]=arreglo[i];
        j--;
    }
    cout << "Los numeros invertidos son: ";
    for(int i=0;i<n;i++)
       if(i==n-1)
        cout << arreglo2[n-1];
       else
        cout << arreglo2[i] << ", ";
    return 0;
}
