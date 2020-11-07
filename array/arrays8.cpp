//Llenar un arreglo de n elementos con letras minúsculas introducidas por el usuario. Imprimir el arreglo resultante.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingresa el numero de letras: ";
    cin >> n;

    char minusculas[n],letra;
    for(int i=0;i<n;)
    {
        cout << "Ingresa una letra minuscula: ";
        cin >> letra;
        if(letra<'a'||letra>'z')
            cout << "Caracter incorrecto" << endl;
        else
        {
            minusculas[i]=letra;
            i++;
        }
    }
    cout << "Las letras minusculas ingresadas son: ";
    for(int i=0;i<n;i++)
        if(i==n-1)
        cout << minusculas[n-1];
        else
        cout << minusculas[i] << ", ";
}
