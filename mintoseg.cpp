#include <iostream>
using namespace std;

int main()
   {
      int seg, min;
      cout << "Ingresa los segundos: ";
      cin >> seg;
      min = seg/60;
      seg = seg%60;
      cout << min << ":" << seg;
      return 0;
   }
