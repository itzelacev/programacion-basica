//Aleatorio / Validacion
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char a;
    int x;

    cout << "**Lanzamiento de 2 dados**" << endl << endl;
    srand(time(NULL));

    do{
        cout << "Resultado del dado 1: " << endl;
        cout << 1+rand()%6 << endl;
        cout << "Resultado del dado 2: " << endl;
        cout << 1+rand()%6 << endl;
        cout << "Quieres continuar? (s/n): ";
        cin >> a;
        cout << endl;
    }while (a!='n');

   return 0;
}

