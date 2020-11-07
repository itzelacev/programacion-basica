//Convertir un número decimal a binario (máx. 1 byte). Guardar
//el número binario en un arreglo de valores booleanos, e
//imprimirlo con el formato que se muestra:
#include <iostream>
using namespace std;

int main()
{
    int num;
    bool binario[8];
    char n;
    do{
    do{
    cout << "Introduce el valor en decimal: ";
    cin >> num;
    }while(num<0||num>255);

    for(int i=7;i>=0;i--)
    {
        binario[i]=num%2;
        num=num/2;
    }
    char a=201,b=205,c=203,d=187,e=186,f=200,g=202,h=188;
    cout << a << b << b << b;
    for(int x=1;x<8;x++)
        cout << c << b << b << b;
    cout << d << endl;
    cout << e;
    for(int i=0;i<8;i++)
        cout << " " << binario[i] << " " << e;
    cout << endl << f << b << b << b;
    for(int x=1;x<8;x++)
        cout << g << b << b << b;
    cout << h;
    cout << endl << "Continuar? ";
    cin >> n;
    cout << endl;
    }while(n!='n');

}
