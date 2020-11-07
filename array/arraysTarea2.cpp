//Convertir a decimal un número binario de máximo 1 byte.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int bi=0;
    bool binarios[8];
    char a[8];

    cout << "***CONVERSION DE BINARIO A DECIMAL***" << endl << endl;
    cout << "Ingresa el numero binario de 8 digitos: ";
    for(int i=7;i>=0;i--)
        cin >> a[i];

    for(int i=7;i>=0;i--)
    {
        switch(a[i])
        {
        case '0':
            binarios[i]=false;
            break;
        case '1':
            binarios[i]=true;
            break;
        }
    }

    for(int i=0;i<8;i++)
        if(binarios[i]==true)
            bi=bi+pow(2,i);

    cout << endl << "El numero binario ingresado, en decimal es: " << bi;

}
