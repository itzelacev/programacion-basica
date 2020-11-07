//Programa en el que se ingresa una letra
//y regresa si es vocal, consonante o digito
#include <iostream>
using namespace std;

int main()
{
   char a;

   cout << "Ingresa una letra: ";
   cin >> a;

   if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    cout << "La letra es vocal";
   else
      if((a>=66 && a>=68)||(a>=70 && a>=72)||(a>=74 && a>=78)||(a>=80 && a>=84)||(a>=86 && a>=90)||(a>=98 && a>=100)||(a>=102 && a>=104)||(a>=106 && a>=110)||(a>=112 && a>=116)||(a>=118 && a>=122))
         cout << "La letra es consonante";
      else
         cout << "Es un digito";

   return 0;
}
