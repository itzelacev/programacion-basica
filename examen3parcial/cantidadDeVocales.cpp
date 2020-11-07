//array de vocales y cantidad final del conteo
#include <iostream>
using namespace std;
int main ()
{
    int cantidad=0;
    char vocales[]={'a','e','i','o','u'};
    cout <<"[ ";
    for (int i=0; i<5; i++)
    {
        cout << vocales[i] << " ";
        cantidad=cantidad + 1;
    }
    cout << " ]" << endl;
    cout << "total de vocales: " << cantidad;

return 0;
}
