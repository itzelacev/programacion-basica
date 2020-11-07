//Pedir un número hasta que se introduzca un par.
#include <iostream>
using namespace std;

int main()
{
    int num=1;

    while(num%2!=0)
    {
        cout << "Ingresa un numero par: ";
        cin >> num;
    }
}
