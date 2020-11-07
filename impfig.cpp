//Imprimir figuras
#include <iostream>
using namespace std;

int main()
{
    char a;

    cout << "a. Figura uno" << endl << "b. Figura dos" << endl << "c. Figura tres" << endl;
    cout << "Que figura quieres?: ";
    cin >> a;
    switch(a)
    {
        case 'a':
            for(int x=1;x<=4;x++)
            {
                cout << endl << "  *****" << endl;
            }
            break;
        case 'b':
            for(int x=1;x<=4;x++)
            {
                cout << endl << "  *****" << endl;
            }
            break;
        case 'c':
            cout << endl << "  *****" << endl;
            for(int x=1;x<=3;x++)
            {
                cout << endl << "  *   *" << endl;
            }
            cout << endl << "  *****" << endl;
            break;
    }
}
