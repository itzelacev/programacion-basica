/* Escriba un programa que calcule el precio del boleto de ida y vuelta en ferrocarriles, conociendo la distancia
del viaje de ida y el tiempo de estancia. El precio por kil�metro es de $0.17. Se sabe adem�s que si el n�mero de
d�as de estancia es superior a 7 y la distancia total (ida y vuelta) a recorrer es superior a 800 Km. el boleto tiene
un descuento del 30%. */
#include <iostream>
using namespace std;

int main()
{
    float dias,distancia,precio;

    cout << "Ingresa la distancia en km: ";
    cin >> distancia;
    cout << "Ingresa los dias de estancia: ";
    cin >> dias;
    distancia*=2;
    if((dias>7)&&(distancia>800))
        precio=distancia*0.119;
    else
        precio=distancia*0.17;
    cout << "El boleto de ida y vuelta tiene el precio de: " << precio;

    return 0;
}
