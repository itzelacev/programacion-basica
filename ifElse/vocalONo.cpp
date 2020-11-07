//Regresa si la letra es vocal o no
#include <iostream>
using namespace std;

int main()
   {
      char x;

      cout << "Ingresa una letra: ";
      cin >> x;

      if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E'|| x=='I' || x=='O' || x=='U' )
         cout << "La letra es vocal";
      else
         cout << "El caracter no es vocal";
   }
