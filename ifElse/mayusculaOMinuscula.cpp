//Regresa si la letra es mayuscula o minuscula
#include <iostream>
using namespace std;

int main()
   {
      char x;

      cout << "Ingresa una letra: ";
      cin >> x;

      if(x>=65 && x<=90)
         cout << "La letra es mayuscula";
      else
         if(x>=97 && x<=122)
            cout << "La letra es minuscula";
         else
            cout << "Caracter incorrecto";


      return 0;
   }
