#include <iostream>
using namespace std;

int cuantas_min(char a[],int n);
int cuantas_min(char a[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
       if(a[i]>='a'&&a[i]<='z')
          s=s+1;
    return s;
}
int main()
{
    char letras[]={'A','b','C','d','E'};

    cout << cuantas_min(letras,5);
    cout << endl;

    for(int i=0;i<5;i++)
    {
        cout << "Ingresa una letra: ";
        cin >> letras[i];
    }

    cout << "Ingresaste " << cuantas_min(letras,5) << " minusculas";

    return 0;
}
