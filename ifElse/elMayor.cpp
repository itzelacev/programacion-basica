//Imprimir que número es mayor o si son iguales
#include <iostream>
using namespace std;

int main()
   {
      int x,y;

      cout << "Ingresa el primer valor: ";
      cin >> x;
      cout << "Ingresa el segundo valor: ";
      cin >> y;

      if(x>y)
         cout << x << " es mayor que " << y;
      else
         if(y>x)
            cout << y << " es mayor que " << x;
         else
            "Los numeros son iguales";

      return 0;
   }
