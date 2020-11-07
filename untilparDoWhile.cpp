//Pedir un número hasta que se introduzca un par.
#include <iostream>
using namespace std;

int main()
{
    int num=0;

    do
    {
        cout << "Ingresa un numero par: ";
        cin >> num;
    }while(num%2!=0);
}
