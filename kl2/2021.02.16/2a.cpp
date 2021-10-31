#include <iostream>
using namespace std;

int main()
{
  int i = 0, x = 1, y = 0, z = 0;
  for (x; x <= 9; x++)
  {
    for (y; y <= 9; y++)
    {
      for (z; z <= 9; z++)
      {
        if (x != y && x != z && y != z)
        {
          cout << x << y << z << " ";
          i++;
        }
      }
      z = 0;
    }
    y = 0;
  }
  cout << "\nLiczb trzycyfrowych o niepotwarzajacych sie cyfrach jest: " << i;
}