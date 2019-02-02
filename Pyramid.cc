#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
  int x, y, z, i;
  cout << "Enter number of steps: ";
  cin >>i;
  
  for (x=1; x<=i; x++)
    {
      for (y=i-1;y >= x; y--)
      cout << "  ";

      for (z=x-1; z>=-(x-1); z--)
      cout<<x-abs(z);

      cout <<endl;
    }

}
