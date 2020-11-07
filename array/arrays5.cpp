//Llenar un arreglo de n elementos con números enteros aleatorios entre num1 y num2.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n,num1,num2;
    cout << "Ingresa n: ";
    cin >> n;
    do{
       cout << "Ingresa el primer numero: ";
       cin >> num1;
       cout << "Ingresa el segundo numero(mayor que el primero): ";
       cin >> num2;
    }while(num1>num2);
    int aleatorios[n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        aleatorios[i]=num1+rand()%(num2-num1+1);
        cout << aleatorios[i] << endl;
    }
}
