//Programa que imprima los primeros 20 números de la siguiente secuencia: 1/100, 2/98, 3/96, 4/94...
#include <iostream>
using namespace std;

int main()
{
    int i,x;
    x=100;
    for(i=1;i<=20;i++)
    {
        cout << i << "/" << x << endl;
        x-=2;
    }
}
