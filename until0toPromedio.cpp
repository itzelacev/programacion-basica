//Programa que lea calificaciones y se detenga cuando el ususario introduzca 0. Imprimir el promedio.
#include <iostream>
using namespace std;

int main()
{
    int x,s,i;
    cout << "**Ingresar calid¿ficaciones hasta que se introduzca un 0 e imprimir el promedio**" << endl << endl;
    i=0;
    s=0;
    do{
        cout << "Ingresa una calificacion: ";
        cin >> x;
        s=s+x;
        if(x!=0) i++;
    }while(x!=0);
    cout << "El promedio es: " << s/i;
    return 0;
}
