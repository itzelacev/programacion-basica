//GENERAR E IMPRIMIR un numero aleatorio del 1 al 5 de letras aleatorias mayusculas
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
   int x,i=0;
   char a;

   srand(time(NULL));
   x=1+rand()%(5-1+1);
   cout << "El numero aleatorio es: " << x << endl;
   cout << "Las letras son: ";

   do{
    a= 'A' + rand()%('Z'-'A'+1);
    cout << a << " ";
    i++;
   }while(i<x);
}
