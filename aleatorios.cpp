//Imprimir 5 numeros aleatorios entre 10 y 15
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
   {
      int a,b;

      srand(time(NULL));
      for(a=1;a<=5;a++)
      {
          b = -2 + rand() % 9;
          cout << b << endl;
      }

      return 0;
   }
