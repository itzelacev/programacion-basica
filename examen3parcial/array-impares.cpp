//Arreglo prellenado y la impresion de los valores impares en este
#include <iostream>
using namespace std;
int main ()
{
    int arreglo[]={1,2,3,4,5,6,7,8,9,10};
    int x;
    cout << "valores del arreglo: " <<endl;
    for (int i=0; i<10; i++)
    {
        cout << arreglo[i] << "  ";
        cout << endl;
    }
    cout << "valores impares: " << endl;
    for (int i=0; i<10; i++)
    {
        x = arreglo[i] % 2;
        if ( x!=0 )
        {
            cout << arreglo[i] << endl;
        }
    }
return 0;
}
