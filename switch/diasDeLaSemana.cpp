//Dias de la semana
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Ingresa un numero: ";
    cin >> x;

    switch(x)
    {
    case 1:
        cout << "Lunes";
        break;
    case 2:
        cout << "Martes";
        break;
    case 3:
        cout << "Miercoles";
        break;
    case 4:
        cout << "Jueves";
        break;
    case 5:
        cout << "Viernes";
        break;
    case 6:
        cout << "Sabado";
        break;
    case 7:
        cout << "Domingo";
        break;
    default:
        cout << "Numero equivocado";
    }

    return 0;
}
