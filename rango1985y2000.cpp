//Leer un numero entre 1985 y 2000 (inclusive). Si el usuario no introduce un numero en ese rango, pedir otro numero y asi hasta
//que se introduzca un numero en el rango indicado
#include <iostream>
using namespace std;

int main()
{
    int x;

    do{
        cout << "Ingresa un numero del 1985 hasta el 2000: ";
        cin >> x;
    }while(x<1985 || x>2000);
    return 0;
}
