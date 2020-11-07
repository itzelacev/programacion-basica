#include <iostream>
using namespace std;

int main()
{
    int x,r,y,i=0;
    cout << "**Es primo o no**"<< endl;
    cout << "Ingresa un numero: ";
    cin >> x;
    y=x-1;
    do{
        r=x%y;
        if(r==0) i++;
        y--;
    }while(y>1);
    if(i==0)
        cout << "El numero " << x << " es primo";
    else
        cout << "El numero " << x << " no es primo";
}
