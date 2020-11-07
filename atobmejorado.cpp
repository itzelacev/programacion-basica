//Programa que lea 2 números e imprima los números desde a hasta b y desde b hasta a
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    bool exito=false;
    cout << "Ingresa un numero: ";
    cin >> a;
    cout << "Ingresa otro numero: ";
    cin >> b;
    for(;!exito;)
    {
        if(a==b)
        {
            cout << "Los numeros son iguales, ingresa numeros diferentes" << endl;
            cout << "Ingresa un numero: ";
            cin >> a;
            cout << "Ingresa otro numero: ";
            cin >> b;
        }
        else
            exito=true;
    }
    if(a<b)
    {
       cout << "De " << a << " a " << b << endl;
       for (int x=a;x<=b;x++)
       {
           cout << x << endl;
       }
       cout << endl << "De " << b << " a " << a << endl;
       for (int x=b;x>=a;x--)
       {
           cout << x << endl;
       }
    }
       if(a>b)
       {
          cout << "De " << b << " a " << a << endl;
          for (int x=b;x<=a;x++)
          {
             cout << x << endl;
          }
          cout << endl << "De " << a << " a " << b << endl;
          for (int x=a;x>=b;x--)
          {
             cout << x << endl;
          }
       }
}
