#include <iostream>
using namespace std;

bool es_mayuscula(char letra);
bool es_mayuscula(char letra)
{
    bool r;
    if(letra>='A'&&letra<='Z')
        r=1;
    return r;
}
int main()
{
    char a,b;
    cout << es_mayuscula('Z') << endl;
    cout << "Ingresa una letra: ";
    cin >> b;
    cout << es_mayuscula(b) << endl;

    do{
        cout << "Ingresa una letra mayuscula: ";
        cin >> a;
    }while(!es_mayuscula(a));

    return 0;
}

