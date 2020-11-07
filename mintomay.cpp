#include <iostream>
using namespace std;

int main()
   {
      char letra;

      cout << "Ingresa una letra minuscula: ";
      cin >> letra;
      letra = letra - 32;
      cout << "Tu letra en mayuscula es: " << letra << endl;

      return 0;
   }
