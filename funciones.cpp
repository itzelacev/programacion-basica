#include <iostream>
using namespace std;

bool es_par(int num);
bool es_par(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int num,n;
    bool x;

    cout << "Ingresa el numero: ";
    cin >> num;
    if(es_par(num)==1)
        cout << endl << "El numero es par." << endl;
    else
        cout << endl << "El numero no es par." << endl;

    do{
        cout << "Ingresa un numero par: ";
        cin >> n;
    }while(es_par(n)==0);

    return 0;
}
