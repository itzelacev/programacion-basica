//Convertir un número decimal a hexadecimal.
#include <iostream>
using namespace std;

int main()
{
    int num,x,tam;

    do{
      cout << "Introduce el valor en decimal(positivo) y menor que 65,536: ";
      cin >> num;
    }while(num<0&&num>65536);

    if(num<16)
      tam=1;
    else
      if(num<256)
        tam=2;
      else
        if(num<4096)
          tam=3;
        else
          if(num<65536)
            tam=4;

    char hexa[tam];

    for(int i=tam-1;i>=0;i--)
    {
        if(num<16)
        {
            switch(num)
            {
              case 0:
                hexa[i]='0';
                break;
              case 1:
                hexa[i]='1';
                break;
              case 2:
                hexa[i]='2';
                break;
              case 3:
                hexa[i]='3';
                break;
              case 4:
                hexa[i]='4';
                break;
              case 5:
                hexa[i]='5';
                break;
              case 6:
                hexa[i]='6';
                break;
              case 7:
                hexa[i]='7';
                break;
              case 8:
                hexa[i]='8';
                break;
              case 9:
                hexa[i]='9';
                break;
              case 10:
                hexa[i]='A';
                break;
              case 11:
                hexa[i]='B';
                break;
              case 12:
                hexa[i]='C';
                break;
              case 13:
                hexa[i]='D';
                break;
              case 14:
                hexa[i]='E';
                break;
              case 15:
                hexa[i]='F';
                break;
            }
        }
        else
        {
           x=num%16;
           switch(x)
            {
              case 0:
                hexa[i]='0';
                break;
              case 1:
                hexa[i]='1';
                break;
              case 2:
                hexa[i]='2';
                break;
              case 3:
                hexa[i]='3';
                break;
              case 4:
                hexa[i]='4';
                break;
              case 5:
                hexa[i]='5';
                break;
              case 6:
                hexa[i]='6';
                break;
              case 7:
                hexa[i]='7';
                break;
              case 8:
                hexa[i]='8';
                break;
              case 9:
                hexa[i]='9';
                break;
              case 10:
                hexa[i]='A';
                break;
              case 11:
                hexa[i]='B';
                break;
              case 12:
                hexa[i]='C';
                break;
              case 13:
                hexa[i]='D';
                break;
              case 14:
                hexa[i]='E';
                break;
              case 15:
                hexa[i]='F';
                break;
            }
        }
        num=num/16;
    }

    cout << endl << "El numero en hexadecimal es: ";
    for(int i=0;i<tam;i++)
        cout << hexa[i] ;

    return 0;
}
