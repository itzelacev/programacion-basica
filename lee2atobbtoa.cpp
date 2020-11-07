//Programa que lea 2 números e imprima los números desde a hasta b y desde b hasta a
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Ingresa un numero: ";
    cin >> a;
    cout << "Ingresa otro numero: ";
    cin >> b;
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
    else
    {
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
       else
        cout << "Los numeros son iguales";
    }
}
