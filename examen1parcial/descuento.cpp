//Realiza descuento al precio de un producto
#include <iostream>
using namespace std;

int main()
   {
      float a,b,c;

      cout << "Ingresa el precio del producto: ";
      cin >> a;

      cout << "Ingresa el porcentaje de descuento: ";
      cin >> b;

      c = 100-b;

      cout << "El total a pagar es: " << (a*c)/100;

      return 0;
   }
