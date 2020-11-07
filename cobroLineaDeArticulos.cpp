/* SIN USAR CICLOS
Programa que pida costo y cantidad de un articulo y pregunte si el cliente lleva
otra linea de articulos mas y de ser si, leer el nuevo costo y cantidad para obtener
el total y mostrarlo, preguntar con cuanto se paga y decir si falto, sobro o quedo justo */
#include <iostream>
using namespace std;

int main()
{
    float costo,total,pago;
    int cantidad;
    char otra;

    cout << "Cuanto cuesta el articulo? ";
    cin >> costo;
    cout << "Cuantos articulos son de esa linea? ";
    cin >> cantidad;
    total=costo*cantidad;
    cout << "Lleva otra linea de articulos mas?(S/N) ";
    cin >> otra;
    if((otra=='S')||(otra=='s'))
    {
        cout << "Cuanto cuesta el segundo articulo? ";
        cin >> costo;
        cout << "Cuantos articulos son de esa linea? ";
        cin >> cantidad;
        total+=costo*cantidad;
    }
    cout << "El total es: $" << total;
    cout << "\nCon cuanto paga?: ";
    cin >> pago;
    if(pago>total)
        cout << "Sobra: $" << pago-total;
    else
        if(pago==total)
            cout << "Pago justo";
        else
            cout << "Falta: $" << (pago-total)*-1;

    return 0;
}
