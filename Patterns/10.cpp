#include <iostream>
using namespace std;

int main()
{
      int x = 2, y = 3, z = 0, n = 0;

      while ( n != y )
      {
            n = n + 1;
            z = z + x;  
      }

      if ( z == (x * y) )
            cout << "z = x times y." << endl;
      else
            cout << "Trap!!" << endl;
}
