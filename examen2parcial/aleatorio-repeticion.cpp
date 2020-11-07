//Aleatorio / Repeticion
//Regresa un numero aleatorio de letras aleatorias
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char a;
    int i,x=0;

    srand(time(NULL));

    i=3+rand()%4;
    cout << "Numero aleatorio: " << i << endl;
    cout << "Letras aleatorias: ";

    while(x<i)
    {
        a=65+rand()%(90-65+1);
        cout << a << " ";
        x++;
    }

   return 0;
}

