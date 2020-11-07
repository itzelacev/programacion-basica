//Array de numeros, se imprimen y regresa el total de pares usando una funcion
#include <iostream>
using namespace std;
//prototipo
int cuantos_pares(int a[]);
//definicion
int cuantos_pares(int a[]){
    int x, pares=0;
    for (int i=0; i<5; i++)
    {
       x= a[i] % 2;

        if ( x==0 )
        {
            pares = pares + 1;
        }

    }return pares;
}
int main ()
{
    int a[]={1,2,3,4,5};
    for (int i=0; i<5; i++)
    {
        cout << a[i] << "  ";
    }
    cout <<"total de pares: " << cuantos_pares(a);
return 0;
}
