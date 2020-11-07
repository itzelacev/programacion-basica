//Dar formato a la salida
#include <iostream>
using namespace std;

int main()
   {
      int semestre;
      char grupo;

      cout << "Ingresa tu semestre: ";
      cin >> semestre;
      cout << "Ingresa tu grupo: ";
      cin >> grupo;

      cout << "**********" << endl << "*        *" << endl << "*   " << semestre << grupo << "   *" << endl;
      cout << "*        *" << endl << "**********";

      return 0;
   }
