#include <iostream>
using namespace std;

void tabla(int num,int repet);
void tabla(int num,int repet)
{
     for(int i=1;i<=repet;i++)
        cout << num << " * " << i << " = " << num*i << endl;
}

int main()
{
    int x,y;

    cout << "Ingresa el numero de la tabla que quieres: ";
    cin >> x;
    cout << "Ingresa el numero de las repeticiones que quieres: ";
    cin >> y;

    tabla(x,y);

    return 0;
}
