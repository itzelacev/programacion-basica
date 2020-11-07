#include <iostream>
using namespace std;

int main()
{
    char a=219,b=' ';
    for(int i=0;i<54;i++)
        cout << a;
    cout << endl << a;
    for(int i=0;i<52;i++)
        cout << b;
    cout << a;
    cout << endl << a;
    cout << b;
    for(int i=0;i<50;i++)
        cout << a;
    cout << b;
    cout << a;
   for(int k=0;k<4;k++)
   {
    for(int j=0;j<3;j++)
    {
       cout <<endl << a << " " << a;
       for(int i=0;i<4;i++)
       {
           cout << a << a << a << a << a << a;
           cout << "      ";
       }
       cout << a << " " << a;
    }
    for(int j=0;j<3;j++)
    {
       cout <<endl << a << " " << a;
       for(int i=0;i<4;i++)
       {
           cout << "      ";
           cout << a << a << a << a << a << a;
       }
       cout << a << " " << a;
    }
   }
    cout << endl << a << ' ';
    for(int i=0;i<50;i++)
        cout << a;
    cout << ' ' << a;

    cout << endl << a;
    for(int i=0;i<52;i++)
        cout << b;
    cout << a << endl;

    for(int i=0;i<54;i++)
        cout << a;

    return 0;
}
