#include <iostream>
using namespace std;

int main()
{
    int x;
    int pares=0;
    int impares=0;
    cout<<"*** Numeros par e impar ***" << endl;
    cout<<"Ingresa la cantidad de numeros: ";
    cin>>x;
    int numerosArray[x];
    for(int i = 1; i <= x ; i++)
    {
        cout<<"Numero "<<i<<": ";
        cin>>numerosArray[i-1];
    }
    for(int i = 1; i <= x; i++)
    {
        int evaluar = numerosArray[i-1] % 2;
        if(evaluar == 0){
            pares+=1;
        }
        else{
            impares+=1;
        }
    }
    cout << pares <<endl;
    cout << impares <<endl;
}


