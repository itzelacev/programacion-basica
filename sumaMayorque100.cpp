//Leer n�meros. Detenerse cuando la sumatoria de los n�meros le�dos sea mayor a 100.
#include <iostream>
using namespace std;

int main()
{
    int x,suma=0;
    do{
        cout << "Ingresa un numero: ";
        cin >> x;
        suma=suma+x;
    }while(suma<100);
}
