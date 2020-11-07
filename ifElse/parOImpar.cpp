//Regresa si el numero es par o impar
#include <iostream>
using namespace std;

int main()
   {
      int x;

      cout << "Ingresa un numero entero: ";
      cin >> x;

      x = x%2;

      if(x==0)
         cout << "El numero es par";
      else
         cout << "El numero es impar";

      return 0;
   }
