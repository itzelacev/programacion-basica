//Convertidor de divisas
#include <iostream>
using namespace std;

int main()
{
    float pesos,dolar,euro,libra;
    char a;

    cout << "Ingresa los pesos: ";
    cin >> pesos;
    cout << "Menu: " << endl << "Dolar" << endl << "Euro" << endl << "Libra" << endl;
    cout << "A que lo quieres convertir?: ";
    cin >> a;
    cout << endl;

    switch (a)
    {
    case 'D':
        cout << "Dolar" << endl;
        dolar=pesos/17.75;
        cout << pesos << " pesos son: " << dolar << " dolares." << endl;
        break;
    case 'E':
        cout << "Euro" << endl;
        euro=pesos/21.22;
        cout << pesos << " pesos son: " << euro << " euros." << endl;
        break;
    case 'L':
        cout << "Libra" << endl;
        libra=pesos/23.96;
        cout << pesos << " pesos son: " << libra << " libras." << endl;
        break;
    case 'd':
        cout << "Dolar" << endl;
        dolar=pesos/17.75;
        cout << pesos << " pesos son: " << dolar << " dolares." << endl;
        break;
    case 'e':
        cout << "Euro" << endl;
        euro=pesos/21.22;
        cout << pesos << " pesos son: " << euro << " euros." << endl;
        break;
    case 'l':
        cout << "Libra" << endl;
        libra=pesos/23.96;
        cout << pesos << " pesos son: " << libra << " libras." << endl;
        break;
    }
}
