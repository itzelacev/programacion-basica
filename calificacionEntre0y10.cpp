//Leer una calificación entera válida (de 0 a 10).
#include <iostream>
using namespace std;

int main()
{
    int x;

    do
    {
        cout << "Ingresa la calificacion entre 0 y 10: ";
        cin >> x;
    }while(x<0||x>10);
}
