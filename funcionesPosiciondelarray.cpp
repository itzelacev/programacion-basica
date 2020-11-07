#include <iostream>
using namespace std;

int posicion(int a[],int n,int t);
int posicion(int a[],int n,int t)
{
     int index=-1;
     for(int i=0;i<t;i++)
        if(a[i]==n)
           index=i;
    return index;
}

int main()
{
    int arra[]={1,2,3,4,5};
    int n;

    cout << "Ingresa un numero del 1 al 5: ";
    cin >> n;

    cout << "a[" << posicion(arra,n,5) << "] = " << n;

    return 0;
}
