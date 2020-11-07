//Llenar un arreglo de 5 elementos con números impares introducidos por el usuario. Imprimir el arreglo resultante.
#include <iostream>
using namespace std;

int main()
{
    int impares[5],x;
    for(int i=0;i<5;)
    {
        cout << "Ingresa un numero impar: ";
        cin >> x;
        if(x%2!=0)
        {
            impares[i]=x;
            i++;
        }
        else
            cout << "Numero incorrecto" << endl;
    }

    cout << "Los numeros impares son: ";
    for(int i=0;i<5;i++)
        if(i==4)
        cout << impares[i];
        else
        cout << impares[i] << ", ";

    return 0;
}
