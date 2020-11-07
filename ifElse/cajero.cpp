//Programa en el que se ingrsa el saldo y el retiro 
//y regresa saldo insuficiente o nuevo saldo
#include <iostream>
using namespace std;

int main()
   {
       float saldo,retiro;

       cout << "Ingresa el saldo: ";
       cin >> saldo;
       cout << "Ingresa el retiro: ";
       cin >> retiro;

       if (retiro>saldo)
          cout << "Saldo insuficiente";
       else
       {
          cout << "Retiro exitoso" << endl;
          cout << "Su nuevo saldo es: " << saldo-retiro;
       }

       return 0;
   }
