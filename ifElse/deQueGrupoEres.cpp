//Uso del if

#include <iostream>
using namespace std;

int main()
   {
      char x;

      cout << "Ingresa tu grupo: ";
      cin >> x;

      if(x=='a'||x=='b'||x=='g'||x=='h')
        cout << "Ing. en Telematica" << endl;
      else
        if(x=='d'||x=='e'||x=='j'||x=='k')
           cout << "Ing. en Software" << endl;
        else
            cout << "Grupo incorrecto";

      return 0;
   }
