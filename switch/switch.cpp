//Uso del switch
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Ingresa un numero: ";
    cin >> x;

    switch(x)
    {
    case 0:
        cout << "Cero";
        break;
    case 1:
        cout << "Uno";
        break;
    case 2:
        cout << "Dos";
        break;
    case 3:
        cout << "Tres";
        break;
    case 4:
        cout << "Cuatro";
        break;
    case 5:
        cout << "Cinco";
        break;
    case 6:
        cout << "Seis";
        break;
    case 7:
        cout << "Siete";
        break;
    case 8:
        cout << "Ocho";
        break;
    case 9:
        cout << "Nueve";
        break;
    default:
        cout << "Otro";
    }

    return 0;

}
