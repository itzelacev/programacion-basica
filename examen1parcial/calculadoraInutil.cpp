//Imprime una operación pero no la realiza
#include <iostream>
using namespace std;

int main()
   {
      int a,b;
      char signo;

      cout << "Ingresa un numero entero: ";
      cin >> a;

      cout << "Ingresa otro numero entero: ";
      cin >> b;

      cout << "ingresa el simbolo de la operacion que deseas realizar: ";
      cin >> signo;


      cout << a << signo << b;

      return 0;
   }
