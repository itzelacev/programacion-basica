//Programa que imprima 10 números aleatorios e imprima cuantos son impares y cuantos son múltiplos de 5
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int multiplos=0,impares=0,num,i;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        num = rand()%100+1;
        cout << num << endl;
        if(num%2!=0)
            impares++;
        if(num%5==0)
            multiplos++;
    }
    cout << endl << "Se imprimieron " << impares << " numeros impares" << endl;
    cout << "Se imprimieron " << multiplos << " numeros multiplos de 5" << endl;
}
