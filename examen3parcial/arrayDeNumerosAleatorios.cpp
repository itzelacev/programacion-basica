//Arreglo de numeros aleatorios
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    char arreglo[5];
    for (int i=0;i<5;i++)
    {
        arreglo[i]=65 + rand() % (90-65+1);
        cout << arreglo[i] << "  ";

    }


return 0;
}
