//Imprimir una línea vertical de longitud n utilizando el carácter ‘-’.
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
