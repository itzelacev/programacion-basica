//Imprimir una l�nea vertical de longitud n utilizando el car�cter �-�.
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Ingresa cuantos caracteres quieres: ";
    cin >> x;

    for(int a=1;a<=x;a++)
    {
        cout << "  -" << endl;
    }
}
