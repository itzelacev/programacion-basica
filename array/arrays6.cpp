//Llenar un arreglo con n letras MAYÚSCULAS de forma aleatoria.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n;

    cout << "Ingresa el numero de letras que deseas: ";
    cin >> n;

    char mayusculas[n];

    srand(time(NULL));
    cout << "Las letras son: ";
    for(int i=0;i<n;i++)
    {
        mayusculas[i]='A'+rand()%('Z'-'A'+1);
        if(i==n-1)
           cout << mayusculas[n-1];
        else
            cout << mayusculas[i] << ", ";
    }

    return 0;
}
