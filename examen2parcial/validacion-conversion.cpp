//Validacion / Conversion
#include <iostream>
using namespace std;

int main()
{
   char a;

   do{
    cout << "Ingresa una letra en minuscula: ";
    cin >> a;
   }while (a<97 || a>122);

   a=a-32;
   cout << "La letra en mayuscula es: " << a;

   return 0;
}
