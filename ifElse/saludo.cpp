//Ingresa la hora y regresa un saludo
#include <iostream>
using namespace std;

int main()
{
   float hora;

   cout << "Que hora es?: ";
   cin >> hora;

   if(hora>=7 && hora<=11)
    cout << "Buenos dias!";
   if(hora>=12 && hora<=18)
    cout << "Buenas tardes!";
   if(hora>=19 && hora<=24)
    cout << "Buenas noches!";
   if(hora>=1 && hora<=6)
    cout << "Vete a dormir";

   return 0;
}
