#include <iostream>
using namespace std;

int main()
{
    bool exito=false;
    int x,b,i;

    cout<<"Ingresa un numero: ";
    cin>>x;
    for(;!exito;){
        if(x>10||x<1)
        {
            cout<<"Ingresa un numero del 1 al 10: ";
            cin>>x;
        }
        else{exito = true;}
    }
    for (i=1;i<=10;i++)
    {
      b=x*i;
      cout << x << " x " << i << " = " << b << endl;
    }
}
