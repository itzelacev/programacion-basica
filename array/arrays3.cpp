//Identificar e imprimir el mayor de un arreglo de 5 enteros.
#include <iostream>
using namespace std;

int main()
{
    int bruh[5],may;

    for(int i=0;i<5;i++)
    {
        cin >> bruh[i];
        if(i==0)
            may=bruh[0];
        else
          if(bruh[i]>may)
             may=bruh[i];
    }
    cout << endl << may;
}
