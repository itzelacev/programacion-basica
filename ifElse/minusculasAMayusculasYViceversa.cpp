//CONVIERTE MAYUSCULA A MINUSCULAS Y VICEVERSA
#include <iostream>
using namespace std;

int main()
{
    char a;

    cout << "Ingresa una letra: ";
    cin >> a;

    if (a>='A' && a<='Z')
    {
        a=a+32;
        cout << "Tu letra es mayuscula, en minuscula es: " << a;
    }

    else
       if (a>='a' && a<='z')
       {
          a=a-32;
          cout << "Tu letra es minuscula, en mayuscula es: " << a;
       }
       else
          cout << "Error, tu caracter no es una letra";

    return 0;
}


