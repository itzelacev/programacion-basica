/* Escriba un programa que acepte como entrada un n�mero de cinco d�gitos, lo separe en sus distintos d�gitos y
los imprima separ�ndolos cada uno con tres espacios. (Sugerencia: emplee los operadores de divisi�n y de
m�dulo) Por ejemplo, si el usuario tecla 42339, el programa deber� imprimir:
4 2 3 3 9 */
#include <iostream>
using namespace std;

int main()
{
    int num,dig1,dig2,dig3,dig4,dig5;
    do
    {
        cout << "Ingresa un numero de cinco digitos: ";
        cin >> num;
    }while((num<9999)||(num>100000));
    dig1=num/10000;
    num%=10000;
    dig2=num/1000;
    num%=1000;
    dig3=num/100;
    num%=100;
    dig4=num/10;
    num%=10;
    dig5=num;
    cout << dig1 << "   " << dig2 << "   " << dig3 << "   " << dig4 << "   " << dig5;


    return 0;
}
