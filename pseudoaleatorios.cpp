//Generacion de numeros pseudoaleatorios
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
   {
      srand(time(NULL));
      cout << rand() << endl;

      return 0;
   }
