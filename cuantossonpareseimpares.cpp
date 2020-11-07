#include <iostream>
using namespace std;

int main()
{
    int a,x,pares,y,impares;

    cout << "Cuantos numeros quieres ingresar?: ";
    cin >> y;
    pares=0;
    impares=0;
    for(a=1;a<=y;a++)
    {
        cout << "Ingresa un numero: ";
        cin >> x;
        x=x%2;
        if(x==0)pares++;
        else impares++;
    }
    cout << "Ingresaste " << pares << " numeros pares y " << impares << " numeros impares";
}
