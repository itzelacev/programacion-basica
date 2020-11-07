#include <iostream>
using namespace std;

void imprimeCaracter(char caracter,char veces);
void imprimeCaracter(char caracter,char veces)
{
    for(int i=0;i<veces;i++)
        cout << caracter;
}
int main()
{
    imprimeCaracter('*',100);
    cout << endl;
    imprimeCaracter('M',7);
    cout << endl;
    imprimeCaracter('.',3);
    cout << endl;

    return 0;
}
