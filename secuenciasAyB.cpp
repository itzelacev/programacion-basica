#include <iostream>
using namespace std;

int main()
{
    int x=3,y=20;

    cout << "a) ";
    while(x<=23)
    {
        cout << x;
        if(x!=23) cout << ", ";
        x+=5;
    }

    cout << endl << "b) ";
    while(y>=-10)
    {
        cout << y;
        if(y!=-10) cout << ", ";
        y-=6;
    }
}
