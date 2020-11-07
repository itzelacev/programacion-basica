//Hacer la suma de los valores de un arreglo de 5 enteros e imprimir el resultado.
#include <iostream>
using namespace std;

int main()
{
    int suma=0,num[5];

    for(int i=0;i<5;i++)
    {
        cin >> num[i];
        suma=suma+num[i];
    }
    cout << endl << suma;
}
